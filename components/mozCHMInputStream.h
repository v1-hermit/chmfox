/***** BEGIN LICENSE BLOCK *****
   - Version: MPL 1.1/GPL 2.0/LGPL 2.1
   -
   - The contents of this file are subject to the Mozilla Public License Version
   - 1.1 (the "License"); you may not use this file except in compliance with
   - the License. You may obtain a copy of the License at
   - http://www.mozilla.org/MPL/
   -
   - Software distributed under the License is distributed on an "AS IS" basis,
   - WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
   - for the specific language governing rights and limitations under the
   - License.
   -
   - The Original Code is "CHM Reader".
   -
   - The Initial Developer of the Original Code is Denis Remondini.
   - Portions created by the Initial Developer are Copyright (C) 2005-2006 Denis Remondini.  
   - All Rights Reserved.
   -
   - Contributor(s): Ling Li <lilingv AT gmail DOT com>
   -
   - Alternatively, the contents of this file may be used under the terms of
   - either the GNU General Public License Version 2 or later (the "GPL"), or
   - the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
   - in which case the provisions of the GPL or the LGPL are applicable instead
   - of those above. If you wish to allow use of your version of this file only
   - under the terms of either the GPL or the LGPL, and not to allow others to
   - use your version of this file under the terms of the MPL, indicate your
   - decision by deleting the provisions above and replace them with the notice
   - and other provisions required by the LGPL or the GPL. If you do not delete
   - the provisions above, a recipient may use your version of this file under
   - the terms of any one of the MPL, the GPL or the LGPL.
   -
   - 
***** END LICENSE BLOCK *****/


#ifndef MOZCHMINPUTSTREAM_H
#define MOZCHMINPUTSTREAM_H

#include "nsIInputStream.h"
#include "ICHMFile.h"
#include "ICHMUnitInfo.h"
#include "nsCOMPtr.h"

#define MOZ_CHMINPUTSTREAM_CLASSNAME "chm input stream"
#define MOZ_CHMINPUTSTREAM_CID_STR "1e6f568a-2f2f-4bf9-9701-9400a9fa6205"
#define MOZ_CHMINPUTSTREAM_CID \
  {0x1e6f568a, 0x2f2f, 0x4bf9, \
    { 0x97, 0x01, 0x94, 0x00, 0xa9, 0xfa, 0x62, 0x05 }}
#define MOZ_CHMINPUTSTREAM_CONTRACTID "@coralsoft.com/chmreader/CHMInputStream;1"

class mozCHMInputStream : public nsIInputStream
{
public:
    NS_DECL_ISUPPORTS
    NS_DECL_NSIINPUTSTREAM

    mozCHMInputStream();
    virtual ~mozCHMInputStream();

    nsresult Init(ICHMFile *chmfile, ICHMUnitInfo *ui);

protected:
    nsCOMPtr<ICHMFile> m_chmfile;
    nsCOMPtr<ICHMUnitInfo> m_ui;
    PRUint64 m_available;
};

#endif