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


#include "ICHMUnitInfo.h"
#include "chm_lib.h"

#define MOZ_CHMUNITINFO_CONTRACTID "@coralsoft.com/chmreader/CHMUnitInfo;1"
#define MOZ_CHMUNITINFO_CLASSNAME "A XPCOM component used to store chmUnitInfo"
#define MOZ_CHMUNITINFO_CID \
  {0xeef77fe6, 0xd4f2, 0x4ead, \
    { 0x9b, 0x07, 0x2c, 0xa5, 0x13, 0xa6, 0x57, 0xf4 }}

class mozCHMUnitInfo : public ICHMUnitInfo
{
public:
    NS_DECL_ISUPPORTS
    NS_DECL_ICHMUNITINFO

    mozCHMUnitInfo();
    virtual ~mozCHMUnitInfo();

protected:
    /* additional members */
    struct chmUnitInfo m_ui;
};