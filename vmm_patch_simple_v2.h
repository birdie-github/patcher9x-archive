/****** Generated by vmm/makepatch.c ******/
/******    changes may be lost   ******/

#ifndef __VMM_PATCH_SIMPLE_V2_H__INCLUDED__
#define __VMM_PATCH_SIMPLE_V2_H__INCLUDED__

/* original data for search */
const uint8_t vmm_patch_simple_v2_orig[] = {
	0x83, 0xEC, 0x10, 0x53, 0x56, 0x57, 0x55, 0xA1, 0x64, 0x4F, 0x01, 0x00, 0x8B, 0x74, 0x24, 0x24, 
	0x40, 0xA3, 0x64, 0x4F, 0x01, 0x00, 0xA1, 0x6C, 0x4F, 0x01, 0x00, 0x40, 0xA3, 0x6C, 0x4F, 0x01, 
	0x00, 0x6A, 0x00, 0x56, 0xE8, 0x70, 0xFE, 0xFF, 0xFF, 0x89, 0xC5, 0x09, 0xED, 0x0F, 0x84, 0xB2, 
	0x01, 0x00, 0x00, 0x8B, 0x5D, 0x04, 0x53, 0xE8, 0x10, 0x0C, 0xFF, 0xFF, 0x83, 0xF8, 0x01, 0x19, 
	0xFF, 0xF7, 0xDF, 0x09, 0xFF, 0x74, 0x15, 0x53, 0xE8, 0x20, 0x0C, 0xFF, 0xFF, 0xA1, 0x70, 0x4F, 
	0x01, 0x00, 0x40, 0x09, 0xFF, 0xA3, 0x70, 0x4F, 0x01, 0x00, 0x75, 0xC5, 0x6A, 0x01, 0x53, 0xE8, 
	0xDC, 0xFD, 0xFF, 0xFF, 0x8B, 0x45, 0x08, 0x89, 0x44, 0x24, 0x10, 0x8B, 0x78, 0x10, 0xC1, 0xEF, 
	0x0C, 0x8D, 0x34, 0xBD, 0x00, 0x00, 0x80, 0xFF, 0x8B, 0x06, 0x89, 0x44, 0x24, 0x14, 0x89, 0xC1, 
	0xC1, 0xE9, 0x0C, 0x6B, 0xC9, 0x0D, 0xA1, 0xA4, 0x4F, 0x01, 0x00, 0x01, 0xC8, 0xF6, 0x43, 0x03, 
	0x08, 0x89, 0x44, 0x24, 0x18, 0x0F, 0x84, 0x86, 0x00, 0x00, 0x00, 0xFF, 0x74, 0x24, 0x10, 0xE8, 
	0x54, 0x57, 0xFF, 0xFF, 0xA1, 0x54, 0x4F, 0x01, 0x00, 0x40, 0xA3, 0x54, 0x4F, 0x01, 0x00, 0x8A, 
	0x43, 0x02, 0x83, 0xE0, 0x7F, 0xFF, 0x34, 0x85, 0x80, 0x60, 0x01, 0x00, 0x53, 0xE8, 0xCC, 0x3E, 
	0xFF, 0xFF, 0x8B, 0x4C, 0x24, 0x18, 0x55, 0x8B, 0x71, 0x04, 0xE8, 0x19, 0xFE, 0xFF, 0xFF, 0xA1, 
	0x98, 0x4F, 0x01, 0x00, 0x40, 0xA3, 0x98, 0x4F, 0x01, 0x00, 0xA1, 0x2C, 0x62, 0x01, 0x00, 0x89, 
	0x1C, 0x85, 0xC4, 0x61, 0x01, 0x00, 0x40, 0xA3, 0x2C, 0x62, 0x01, 0x00, 0x83, 0xF8, 0x1A, 0x7C, 
	0x0A, 0xC7, 0x05, 0x2C, 0x62, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x63, 0x03, 0xE7, 0x89, 
	0x73, 0x06, 0x53, 0xE8, 0x65, 0x0B, 0xFF, 0xFF, 0xFF, 0x74, 0x24, 0x10, 0xE8, 0xD8, 0x56, 0xFF, 
	0xFF, 0xA1, 0x54, 0x4F, 0x01, 0x00, 0x48, 0xA3, 0x54, 0x4F, 0x01, 0x00, 0xE9, 0xC4, 0x00, 0x00, 
	0x00, 0x8D, 0x44, 0x24, 0x1C, 0x50, 0x6A, 0x01, 0x57, 0xE8, 0x82, 0x0D, 0xFF, 0xFF, 0x2B, 0x05, 
	0x5C, 0x5F, 0x01, 0x00, 0xB9, 0x0C, 0x00, 0x00, 0x00, 0x29, 0xD2, 0xF7, 0xF1, 0xD3, 0xE0, 0x8B, 
	0x4C, 0x24, 0x14, 0x81, 0xE1, 0xFF, 0x0F, 0x00, 0x00, 0x09, 0xC8, 0x89, 0x06, 0x25, 0xFF, 0xFD, 
	0xFF, 0xFF, 0x89, 0x06, 0x25, 0xFF, 0xF7, 0xFF, 0xFF, 0x89, 0x06, 0xE8, 0x60, 0x0B, 0xFF, 0xFF, 
	0x6A, 0x08, 0x6A, 0x00, 0x6A, 0x03, 0x6A, 0x01, 0x57, 0xE8, 0x82, 0xE0, 0xFC, 0xFF, 0x83, 0xC4, 
	0x14, 0xFF, 0x0D, 0xF8, 0x26, 0x01, 0x00, 0xFF, 0x0D, 0x58, 0x26, 0x01, 0x00, 0xB9, 0x0D, 0x00, 
	0x00, 0x00, 0x8B, 0x43, 0x06, 0x29, 0xD2, 0x2B, 0x05, 0xA4, 0x4F, 0x01, 0x00, 0xF7, 0xF1, 0xC1, 
	0xE0, 0x0C, 0x8B, 0x0D, 0x98, 0x50, 0x01, 0x00, 0x8B, 0x11, 0x31, 0xC2, 0x81, 0xE2, 0xFF, 0x0F, 
	0x00, 0x00, 0x31, 0xC2, 0x8B, 0x44, 0x24, 0x10, 0x89, 0x11, 0xB9, 0x00, 0x04, 0x00, 0x00, 0x8B, 
	0x78, 0x10, 0x8B, 0x35, 0x78, 0x61, 0x01, 0x00, 0xF3, 0xA5, 0xFF, 0x74, 0x24, 0x10, 0xE8, 0x26, 
	0x56, 0xFF, 0xFF, 0xA1, 0x54, 0x4F, 0x01, 0x00, 0xFF, 0x74, 0x24, 0x10, 0x48, 0xA3, 0x54, 0x4F, 
	0x01, 0x00, 0xE8, 0x3F, 0x56, 0xFF, 0xFF, 0x53, 0xE8, 0x90, 0x0A, 0xFF, 0xFF, 0x6A, 0x00, 0x55, 
	0xE8, 0xC8, 0x0F, 0x00, 0x00, 0xA1, 0x64, 0x4F, 0x01, 0x00, 0x5D, 0x48, 0x5F, 0xA3, 0x64, 0x4F, 
	0x01, 0x00, 0x5E, 0x5B, 0x83, 0xC4, 0x10, 0xC3, 0x53, 0x56, 0xB9, 0x02, 0x00, 0x00, 0x00, 0xE8, 
	0x8D, 0x86, 0xFF, 0xFF, 0x88, 0xC3, 0x6A, 0x00, 0x6A, 0x00, 0x6A, 0x00, 0x6A, 0x1E, 0xE8, 0xE1, 
	0x13, 0x00, 0x00, 0x89, 0xC6, 0x89, 0xD9, 0xE8, 0x9A, 0x86, 0xFF, 0xFF, 0x8B, 0x44, 0x24, 0x0C, 
	0x89, 0x46, 0x04, 0x89, 0xC1, 0xC1, 0xE9, 0x0A, 0x31, 0xC1, 0x81, 0xE1, 0xE0, 0x1F, 0x00, 0x00, 
	0xC1, 0xE9, 0x05, 0x8B, 0x04, 0x8D, 0x98, 0x5A, 0x01, 0x00, 0x89, 0x06, 0xA1, 0x50, 0x4F, 0x01, 
	0x00, 0x89, 0x34, 0x8D, 0x98, 0x5A, 0x01, 0x00, 0x40, 0xA3, 0x50, 0x4F, 0x01, 0x00, 0x89, 0xF0, 
	0x5E, 0x5B, 0xC2, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

/* bitmap of bytes to check */
const uint8_t vmm_patch_simple_v2_orig_check[] = {
	
	0xFF, 0x0F, 0xC2, 0x18, 0x7F, 0x8F, 0xFF, 0x0E, 0xEF, 0x84, 0x2C, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 
	0xFE, 0x07, 0xFF, 0xFF, 0x08, 0x61, 0xFF, 0x0C, 0x3F, 0xFF, 0x0C, 0x21, 0xC3, 0x0F, 0xE1, 0xFF, 
	0xF0, 0xF8, 0x43, 0x0F, 0xFF, 0xC3, 0x0F, 0xBF, 0xFF, 0x9F, 0xFF, 0xF0, 0xFF, 0xC3, 0xE1, 0x87, 
	0xFB, 0x87, 0xF0, 0xCF, 0xCF, 0xFF, 0xF0, 0xFE, 0x10, 0xFC, 0x21, 0x87, 0x84, 0x3C, 0x3F, 0xFF, 
	0x03, 0xFE, 0x01, 0x0F, 0xE7, 0x3F, 0xFC, 0x38, 0x70, 0xC0, 0xFF, 0xFF, 
};

/* new data to replace */
const uint8_t vmm_patch_simple_v2[] = {
	0x83, 0xEC, 0x10, 0x53, 0x56, 0x57, 0x55, 0xA1, 0x64, 0x4F, 0x01, 0x00, 0x8B, 0x74, 0x24, 0x24, 
	0x40, 0xA3, 0x64, 0x4F, 0x01, 0x00, 0xA1, 0x6C, 0x4F, 0x01, 0x00, 0x40, 0xA3, 0x6C, 0x4F, 0x01, 
	0x00, 0x6A, 0x00, 0x56, 0xE8, 0x70, 0xFE, 0xFF, 0xFF, 0x89, 0xC5, 0x09, 0xED, 0x0F, 0x84, 0xB2, 
	0x01, 0x00, 0x00, 0x8B, 0x5D, 0x04, 0x53, 0xE8, 0x10, 0x0C, 0xFF, 0xFF, 0x83, 0xF8, 0x01, 0x19, 
	0xFF, 0xF7, 0xDF, 0x09, 0xFF, 0x74, 0x15, 0x53, 0xE8, 0x20, 0x0C, 0xFF, 0xFF, 0xA1, 0x70, 0x4F, 
	0x01, 0x00, 0x40, 0x09, 0xFF, 0xA3, 0x70, 0x4F, 0x01, 0x00, 0x75, 0xC5, 0x6A, 0x01, 0x53, 0xE8, 
	0xDC, 0xFD, 0xFF, 0xFF, 0x8B, 0x45, 0x08, 0x89, 0x44, 0x24, 0x10, 0x8B, 0x78, 0x10, 0xC1, 0xEF, 
	0x0C, 0x8D, 0x34, 0xBD, 0x00, 0x00, 0x80, 0xFF, 0x8B, 0x06, 0x89, 0x44, 0x24, 0x14, 0x89, 0xC1, 
	0xC1, 0xE9, 0x0C, 0x6B, 0xC9, 0x0D, 0xA1, 0xA4, 0x4F, 0x01, 0x00, 0x01, 0xC8, 0xF6, 0x43, 0x03, 
	0x08, 0x89, 0x44, 0x24, 0x18, 0x0F, 0x84, 0x86, 0x00, 0x00, 0x00, 0xFF, 0x74, 0x24, 0x10, 0xE8, 
	0x54, 0x57, 0xFF, 0xFF, 0xA1, 0x54, 0x4F, 0x01, 0x00, 0x40, 0xA3, 0x54, 0x4F, 0x01, 0x00, 0x8A, 
	0x43, 0x02, 0x83, 0xE0, 0x7F, 0xFF, 0x34, 0x85, 0x80, 0x60, 0x01, 0x00, 0x53, 0xE8, 0xCC, 0x3E, 
	0xFF, 0xFF, 0x8B, 0x4C, 0x24, 0x18, 0x55, 0x8B, 0x71, 0x04, 0xE8, 0x19, 0xFE, 0xFF, 0xFF, 0xA1, 
	0x98, 0x4F, 0x01, 0x00, 0x40, 0xA3, 0x98, 0x4F, 0x01, 0x00, 0xA1, 0x2C, 0x62, 0x01, 0x00, 0x89, 
	0x1C, 0x85, 0xC4, 0x61, 0x01, 0x00, 0x40, 0xA3, 0x2C, 0x62, 0x01, 0x00, 0x83, 0xF8, 0x1A, 0x7C, 
	0x0A, 0xC7, 0x05, 0x2C, 0x62, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x63, 0x03, 0xE7, 0x89, 
	0x73, 0x06, 0x53, 0xE8, 0x65, 0x0B, 0xFF, 0xFF, 0xFF, 0x74, 0x24, 0x10, 0xE8, 0xD8, 0x56, 0xFF, 
	0xFF, 0xA1, 0x54, 0x4F, 0x01, 0x00, 0x48, 0xA3, 0x54, 0x4F, 0x01, 0x00, 0xE9, 0xC4, 0x00, 0x00, 
	0x00, 0x8D, 0x44, 0x24, 0x1C, 0x50, 0x6A, 0x01, 0x57, 0xE8, 0x82, 0x0D, 0xFF, 0xFF, 0x2B, 0x05, 
	0x5C, 0x5F, 0x01, 0x00, 0xB9, 0x0C, 0x00, 0x00, 0x00, 0x29, 0xD2, 0xF7, 0xF1, 0xD3, 0xE0, 0x8B, 
	0x4C, 0x24, 0x14, 0x80, 0xE5, 0x0F, 0x66, 0x09, 0xC8, 0x80, 0xE4, 0xF5, 0x89, 0x06, 0xEB, 0x0B, 
	0x0F, 0x20, 0xD9, 0x0F, 0x22, 0xD9, 0x90, 0x31, 0xC9, 0xEB, 0x52, 0xE8, 0x60, 0x0B, 0xFF, 0xFF, 
	0x6A, 0x08, 0x6A, 0x00, 0x6A, 0x03, 0x6A, 0x01, 0x57, 0xE8, 0x82, 0xE0, 0xFC, 0xFF, 0x83, 0xC4, 
	0x14, 0xFF, 0x0D, 0xF8, 0x26, 0x01, 0x00, 0xFF, 0x0D, 0x58, 0x26, 0x01, 0x00, 0xB9, 0x0D, 0x00, 
	0x00, 0x00, 0x8B, 0x43, 0x06, 0x29, 0xD2, 0x2B, 0x05, 0xA4, 0x4F, 0x01, 0x00, 0xF7, 0xF1, 0xC1, 
	0xE0, 0x0C, 0x8B, 0x0D, 0x98, 0x50, 0x01, 0x00, 0x8B, 0x11, 0x31, 0xC2, 0x81, 0xE2, 0xFF, 0x0F, 
	0x00, 0x00, 0x31, 0xC2, 0x8B, 0x44, 0x24, 0x10, 0x89, 0x11, 0xEB, 0xA4, 0x90, 0xB5, 0x04, 0x8B, 
	0x78, 0x10, 0x8B, 0x35, 0x78, 0x61, 0x01, 0x00, 0xF3, 0xA5, 0xFF, 0x74, 0x24, 0x10, 0xE8, 0x26, 
	0x56, 0xFF, 0xFF, 0xA1, 0x54, 0x4F, 0x01, 0x00, 0xFF, 0x74, 0x24, 0x10, 0x48, 0xA3, 0x54, 0x4F, 
	0x01, 0x00, 0xE8, 0x3F, 0x56, 0xFF, 0xFF, 0x53, 0xE8, 0x90, 0x0A, 0xFF, 0xFF, 0x6A, 0x00, 0x55, 
	0xE8, 0xC8, 0x0F, 0x00, 0x00, 0xA1, 0x64, 0x4F, 0x01, 0x00, 0x5D, 0x48, 0x5F, 0xA3, 0x64, 0x4F, 
	0x01, 0x00, 0x5E, 0x5B, 0x83, 0xC4, 0x10, 0xC3, 0x53, 0x56, 0xB9, 0x02, 0x00, 0x00, 0x00, 0xE8, 
	0x8D, 0x86, 0xFF, 0xFF, 0x88, 0xC3, 0x6A, 0x00, 0x6A, 0x00, 0x6A, 0x00, 0x6A, 0x1E, 0xE8, 0xE1, 
	0x13, 0x00, 0x00, 0x89, 0xC6, 0x89, 0xD9, 0xE8, 0x9A, 0x86, 0xFF, 0xFF, 0x8B, 0x44, 0x24, 0x0C, 
	0x89, 0x46, 0x04, 0x89, 0xC1, 0xC1, 0xE9, 0x0A, 0x31, 0xC1, 0x81, 0xE1, 0xE0, 0x1F, 0x00, 0x00, 
	0xC1, 0xE9, 0x05, 0x8B, 0x04, 0x8D, 0x98, 0x5A, 0x01, 0x00, 0x89, 0x06, 0xA1, 0x50, 0x4F, 0x01, 
	0x00, 0x89, 0x34, 0x8D, 0x98, 0x5A, 0x01, 0x00, 0x40, 0xA3, 0x50, 0x4F, 0x01, 0x00, 0x89, 0xF0, 
	0x5E, 0x5B, 0xC2, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

/* bitmap of modify bytes */
const uint8_t vmm_patch_simple_v2_modif[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

#endif /* __VMM_PATCH_SIMPLE_V2_H__INCLUDED__ */
