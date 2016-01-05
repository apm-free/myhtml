/*
 Copyright 2015 Alexander Borisov
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#ifndef MyHTML_MYTAGS_CONST_H
#define MyHTML_MYTAGS_CONST_H

#ifdef __cplusplus
extern "C" {
#endif

enum mytags_tag {
	MyTAGS_TAG__UNDEF         = 0x000,
	MyTAGS_TAG__TEXT          = 0x001,
	MyTAGS_TAG__COMMENT       = 0x002,
	MyTAGS_TAG__DOCTYPE       = 0x003,
	MyTAGS_TAG_A              = 0x004,
	MyTAGS_TAG_ABBR           = 0x005,
	MyTAGS_TAG_ACRONYM        = 0x006,
	MyTAGS_TAG_ADDRESS        = 0x007,
	MyTAGS_TAG_ANNOTATION_XML = 0x008,
	MyTAGS_TAG_APPLET         = 0x009,
	MyTAGS_TAG_AREA           = 0x00a,
	MyTAGS_TAG_ARTICLE        = 0x00b,
	MyTAGS_TAG_ASIDE          = 0x00c,
	MyTAGS_TAG_AUDIO          = 0x00d,
	MyTAGS_TAG_B              = 0x00e,
	MyTAGS_TAG_BASE           = 0x00f,
	MyTAGS_TAG_BASEFONT       = 0x010,
	MyTAGS_TAG_BDI            = 0x011,
	MyTAGS_TAG_BDO            = 0x012,
	MyTAGS_TAG_BGSOUND        = 0x013,
	MyTAGS_TAG_BIG            = 0x014,
	MyTAGS_TAG_BLINK          = 0x015,
	MyTAGS_TAG_BLOCKQUOTE     = 0x016,
	MyTAGS_TAG_BODY           = 0x017,
	MyTAGS_TAG_BR             = 0x018,
	MyTAGS_TAG_BUTTON         = 0x019,
	MyTAGS_TAG_CANVAS         = 0x01a,
	MyTAGS_TAG_CAPTION        = 0x01b,
	MyTAGS_TAG_CENTER         = 0x01c,
	MyTAGS_TAG_CITE           = 0x01d,
	MyTAGS_TAG_CODE           = 0x01e,
	MyTAGS_TAG_COL            = 0x01f,
	MyTAGS_TAG_COLGROUP       = 0x020,
	MyTAGS_TAG_COMMAND        = 0x021,
	MyTAGS_TAG_COMMENT        = 0x022,
	MyTAGS_TAG_DATALIST       = 0x023,
	MyTAGS_TAG_DD             = 0x024,
	MyTAGS_TAG_DEL            = 0x025,
	MyTAGS_TAG_DESC           = 0x026,
	MyTAGS_TAG_DETAILS        = 0x027,
	MyTAGS_TAG_DFN            = 0x028,
	MyTAGS_TAG_DIALOG         = 0x029,
	MyTAGS_TAG_DIR            = 0x02a,
	MyTAGS_TAG_DIV            = 0x02b,
	MyTAGS_TAG_DL             = 0x02c,
	MyTAGS_TAG_DT             = 0x02d,
	MyTAGS_TAG_EM             = 0x02e,
	MyTAGS_TAG_EMBED          = 0x02f,
	MyTAGS_TAG_FIELDSET       = 0x030,
	MyTAGS_TAG_FIGCAPTION     = 0x031,
	MyTAGS_TAG_FIGURE         = 0x032,
	MyTAGS_TAG_FONT           = 0x033,
	MyTAGS_TAG_FOOTER         = 0x034,
	MyTAGS_TAG_FOREIGNOBJECT  = 0x035,
	MyTAGS_TAG_FORM           = 0x036,
	MyTAGS_TAG_FRAME          = 0x037,
	MyTAGS_TAG_FRAMESET       = 0x038,
	MyTAGS_TAG_H1             = 0x039,
	MyTAGS_TAG_H2             = 0x03a,
	MyTAGS_TAG_H3             = 0x03b,
	MyTAGS_TAG_H4             = 0x03c,
	MyTAGS_TAG_H5             = 0x03d,
	MyTAGS_TAG_H6             = 0x03e,
	MyTAGS_TAG_HEAD           = 0x03f,
	MyTAGS_TAG_HEADER         = 0x040,
	MyTAGS_TAG_HGROUP         = 0x041,
	MyTAGS_TAG_HR             = 0x042,
	MyTAGS_TAG_HTML           = 0x043,
	MyTAGS_TAG_I              = 0x044,
	MyTAGS_TAG_IFRAME         = 0x045,
	MyTAGS_TAG_IMAGE          = 0x046,
	MyTAGS_TAG_IMG            = 0x047,
	MyTAGS_TAG_INPUT          = 0x048,
	MyTAGS_TAG_INS            = 0x049,
	MyTAGS_TAG_ISINDEX        = 0x04a,
	MyTAGS_TAG_KBD            = 0x04b,
	MyTAGS_TAG_KEYGEN         = 0x04c,
	MyTAGS_TAG_LABEL          = 0x04d,
	MyTAGS_TAG_LEGEND         = 0x04e,
	MyTAGS_TAG_LI             = 0x04f,
	MyTAGS_TAG_LINK           = 0x050,
	MyTAGS_TAG_LISTING        = 0x051,
	MyTAGS_TAG_MAIN           = 0x052,
	MyTAGS_TAG_MALIGNMARK     = 0x053,
	MyTAGS_TAG_MAP            = 0x054,
	MyTAGS_TAG_MARK           = 0x055,
	MyTAGS_TAG_MARQUEE        = 0x056,
	MyTAGS_TAG_MATH           = 0x057,
	MyTAGS_TAG_MENU           = 0x058,
	MyTAGS_TAG_MENUITEM       = 0x059,
	MyTAGS_TAG_MERROR         = 0x05a,
	MyTAGS_TAG_META           = 0x05b,
	MyTAGS_TAG_METER          = 0x05c,
	MyTAGS_TAG_MGLYPH         = 0x05d,
	MyTAGS_TAG_MI             = 0x05e,
	MyTAGS_TAG_MO             = 0x05f,
	MyTAGS_TAG_MN             = 0x060,
	MyTAGS_TAG_MS             = 0x061,
	MyTAGS_TAG_MTEXT          = 0x062,
	MyTAGS_TAG_NAV            = 0x063,
	MyTAGS_TAG_NOBR           = 0x064,
	MyTAGS_TAG_NOEMBED        = 0x065,
	MyTAGS_TAG_NOFRAMES       = 0x066,
	MyTAGS_TAG_NOSCRIPT       = 0x067,
	MyTAGS_TAG_OBJECT         = 0x068,
	MyTAGS_TAG_OL             = 0x069,
	MyTAGS_TAG_OPTGROUP       = 0x06a,
	MyTAGS_TAG_OPTION         = 0x06b,
	MyTAGS_TAG_OUTPUT         = 0x06c,
	MyTAGS_TAG_P              = 0x06d,
	MyTAGS_TAG_PARAM          = 0x06e,
	MyTAGS_TAG_PLAINTEXT      = 0x06f,
	MyTAGS_TAG_PRE            = 0x070,
	MyTAGS_TAG_PROGRESS       = 0x071,
	MyTAGS_TAG_Q              = 0x072,
	MyTAGS_TAG_RB             = 0x073,
	MyTAGS_TAG_RP             = 0x074,
	MyTAGS_TAG_RT             = 0x075,
	MyTAGS_TAG_RTC            = 0x076,
	MyTAGS_TAG_RUBY           = 0x077,
	MyTAGS_TAG_S              = 0x078,
	MyTAGS_TAG_SAMP           = 0x079,
	MyTAGS_TAG_SCRIPT         = 0x07a,
	MyTAGS_TAG_SECTION        = 0x07b,
	MyTAGS_TAG_SELECT         = 0x07c,
	MyTAGS_TAG_SMALL          = 0x07d,
	MyTAGS_TAG_SOURCE         = 0x07e,
	MyTAGS_TAG_SPAN           = 0x07f,
	MyTAGS_TAG_STRIKE         = 0x080,
	MyTAGS_TAG_STRONG         = 0x081,
	MyTAGS_TAG_STYLE          = 0x082,
	MyTAGS_TAG_SUB            = 0x083,
	MyTAGS_TAG_SUMMARY        = 0x084,
	MyTAGS_TAG_SUP            = 0x085,
	MyTAGS_TAG_SVG            = 0x086,
	MyTAGS_TAG_TABLE          = 0x087,
	MyTAGS_TAG_TBODY          = 0x088,
	MyTAGS_TAG_TD             = 0x089,
	MyTAGS_TAG_TEMPLATE       = 0x08a,
	MyTAGS_TAG_TEXTAREA       = 0x08b,
	MyTAGS_TAG_TFOOT          = 0x08c,
	MyTAGS_TAG_TH             = 0x08d,
	MyTAGS_TAG_THEAD          = 0x08e,
	MyTAGS_TAG_TIME           = 0x08f,
	MyTAGS_TAG_TITLE          = 0x090,
	MyTAGS_TAG_TR             = 0x091,
	MyTAGS_TAG_TRACK          = 0x092,
	MyTAGS_TAG_TT             = 0x093,
	MyTAGS_TAG_U              = 0x094,
	MyTAGS_TAG_UL             = 0x095,
	MyTAGS_TAG_VAR            = 0x096,
	MyTAGS_TAG_VIDEO          = 0x097,
	MyTAGS_TAG_WBR            = 0x098,
	MyTAGS_TAG_XMP            = 0x099,
	MyTAGS_TAG__END_OF_FILE   = 0x09a,
	MyTAGS_TAG_FIRST_ENTRY    = MyTAGS_TAG__TEXT,
	MyTAGS_TAG_LAST_ENTRY     = 0x09b
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
