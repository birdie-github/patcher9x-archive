/****** Generated by vmm/makepatch.c ******/
/******    changes may be lost   ******/

#ifndef __VMM_PATCH_ME1_H__INCLUDED__
#define __VMM_PATCH_ME1_H__INCLUDED__

/* original data for search */
const uint8_t vmm_patch_me1_orig[] = {
	0x55, 0x89, 0xE5, 0x83, 0xEC, 0x0C, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x05, 0x00, 0x00, 
	0x00, 0x00, 0x53, 0x56, 0x57, 0x6A, 0x00, 0xFF, 0x75, 0x08, 0xE8, 0x91, 0xFE, 0xFF, 0xFF, 0x89, 
	0xC6, 0x85, 0xF6, 0x89, 0x75, 0xFC, 0x0F, 0x84, 0x96, 0x01, 0x00, 0x00, 0xEB, 0x03, 0x8B, 0x75, 
	0xFC, 0x8B, 0x5E, 0x04, 0x53, 0xE8, 0x26, 0xF4, 0xFF, 0xFF, 0xF7, 0xD8, 0x19, 0xC0, 0x40, 0x89, 
	0x45, 0xF8, 0x74, 0x22, 0x53, 0xE8, 0x39, 0xF4, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 
	0x6A, 0x00, 0xFF, 0x75, 0x08, 0xE8, 0x56, 0xFE, 0xFF, 0xFF, 0x85, 0xC0, 0x89, 0x45, 0xFC, 0x75, 
	0xCD, 0xE9, 0x5C, 0x01, 0x00, 0x00, 0x6A, 0x01, 0x53, 0xE8, 0xE2, 0xFD, 0xFF, 0xFF, 0x8B, 0x4E, 
	0x08, 0x89, 0x4D, 0x08, 0x8B, 0x71, 0x10, 0xC1, 0xEE, 0x0C, 0x8B, 0x04, 0xB5, 0x00, 0x00, 0x80, 
	0xFF, 0x8D, 0x3C, 0xB5, 0x00, 0x00, 0x80, 0xFF, 0xC1, 0xE8, 0x0C, 0xC1, 0xE0, 0x04, 0x03, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x89, 0x45, 0xF8, 0xF6, 0x43, 0x03, 0x08, 0x74, 0x75, 0x51, 0xE8, 0xED, 
	0x37, 0x00, 0x00, 0x8A, 0x43, 0x02, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x83, 0xE0, 0x7F, 0xFF, 
	0x34, 0x85, 0x00, 0x00, 0x00, 0x00, 0x53, 0xE8, 0xE9, 0x20, 0x00, 0x00, 0x8B, 0x45, 0xF8, 0xFF, 
	0x75, 0xFC, 0x8B, 0x70, 0x04, 0xE8, 0x2C, 0xFE, 0xFF, 0xFF, 0xA1, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0x05, 0x00, 0x00, 0x00, 0x00, 0x89, 0x1C, 0x85, 0x00, 0x00, 0x00, 0x00, 0x40, 0x83, 0xF8, 0x1A, 
	0xA3, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x07, 0x83, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0x73, 
	0x06, 0x8A, 0x43, 0x03, 0x24, 0xE7, 0x88, 0x43, 0x03, 0x53, 0xE8, 0x84, 0xF3, 0xFF, 0xFF, 0xFF, 
	0x75, 0x08, 0xE8, 0x7A, 0x37, 0x00, 0x00, 0xFF, 0x0D, 0x00, 0x00, 0x00, 0x00, 0xE9, 0xB0, 0x00, 
	0x00, 0x00, 0x8D, 0x45, 0xF4, 0x50, 0x6A, 0x01, 0x56, 0xE8, 0x9F, 0xF5, 0xFF, 0xFF, 0x2B, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x6A, 0x0C, 0x31, 0xD2, 0x59, 0xF7, 0xF1, 0x8B, 0x0F, 0x81, 0xE1, 0xFF, 
	0x05, 0x00, 0x00, 0xC1, 0xE0, 0x0C, 0x09, 0xC8, 0x89, 0x07, 0xE8, 0x97, 0xF3, 0xFF, 0xFF, 0x6A, 
	0x08, 0x6A, 0x00, 0x6A, 0x03, 0x6A, 0x01, 0x56, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x83, 0xC4, 0x14, 
	0xA1, 0x00, 0x00, 0x00, 0x00, 0x48, 0xA3, 0x00, 0x00, 0x00, 0x00, 0xA1, 0x00, 0x00, 0x00, 0x00, 
	0x48, 0xA3, 0x00, 0x00, 0x00, 0x00, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x69, 0xC0, 0xFF, 0xFF, 0xFF, 
	0x00, 0x03, 0x43, 0x06, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x35, 0x00, 0x00, 0x00, 0x00, 
	0xC1, 0xE0, 0x08, 0x89, 0xC2, 0x33, 0x11, 0x81, 0xE2, 0xFF, 0x0F, 0x00, 0x00, 0x31, 0xC2, 0x8B, 
	0x45, 0x08, 0x89, 0x11, 0xB9, 0x00, 0x04, 0x00, 0x00, 0x8B, 0x78, 0x10, 0x50, 0xF3, 0xA5, 0xE8, 
	0xDD, 0x36, 0x00, 0x00, 0xFF, 0x75, 0x08, 0xFF, 0x0D, 0x00, 0x00, 0x00, 0x00, 0xE8, 0xFC, 0x36, 
	0x00, 0x00, 0x53, 0xE8, 0xCB, 0xF2, 0xFF, 0xFF, 0x6A, 0x00, 0xFF, 0x75, 0xFC, 0xE8, 0x4D, 0x49, 
	0x00, 0x00, 0xFF, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x5E, 0x5B, 0xC9, 0xC3, 
};

/* bitmap of bytes to check */
const uint8_t vmm_patch_me1_orig_check[] = {
	
	0x9F, 0x0C, 0x3F, 0xE0, 0x7F, 0xFF, 0xFC, 0x37, 0xFC, 0x30, 0xFC, 0x3F, 0xFF, 0xC3, 0xFF, 0xFF, 
	0xFF, 0xFF, 0x0F, 0xFE, 0x1F, 0x0F, 0xFF, 0x0F, 0xFC, 0x3F, 0x87, 0xFF, 0xFF, 0x87, 0xFF, 0xE1, 
	0xE1, 0x87, 0xFF, 0xC3, 0x0D, 0xFF, 0xFC, 0xE1, 0xFF, 0x87, 0x86, 0x10, 0xC2, 0x1F, 0xFC, 0x30, 
	0xE7, 0xF9, 0xFF, 0xFF, 0x0F, 0x84, 0x30, 0xFC, 0x30, 0xF8, 
};

/* new data to replace */
const uint8_t vmm_patch_me1[] = {
	0x55, 0x89, 0xE5, 0x83, 0xEC, 0x0C, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x05, 0x00, 0x00, 
	0x00, 0x00, 0x53, 0x56, 0x57, 0x6A, 0x00, 0xFF, 0x75, 0x08, 0xE8, 0x91, 0xFE, 0xFF, 0xFF, 0x89, 
	0xC6, 0x85, 0xF6, 0x89, 0x75, 0xFC, 0x0F, 0x84, 0x96, 0x01, 0x00, 0x00, 0xEB, 0x03, 0x8B, 0x75, 
	0xFC, 0x8B, 0x5E, 0x04, 0x53, 0xE8, 0x26, 0xF4, 0xFF, 0xFF, 0xF7, 0xD8, 0x19, 0xC0, 0x40, 0x89, 
	0x45, 0xF8, 0x74, 0x22, 0x53, 0xE8, 0x39, 0xF4, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 
	0x6A, 0x00, 0xFF, 0x75, 0x08, 0xE8, 0x56, 0xFE, 0xFF, 0xFF, 0x85, 0xC0, 0x89, 0x45, 0xFC, 0x75, 
	0xCD, 0xE9, 0x5C, 0x01, 0x00, 0x00, 0x6A, 0x01, 0x53, 0xE8, 0xE2, 0xFD, 0xFF, 0xFF, 0x8B, 0x4E, 
	0x08, 0x89, 0x4D, 0x08, 0x8B, 0x71, 0x10, 0xC1, 0xEE, 0x0C, 0x8B, 0x04, 0xB5, 0x00, 0x00, 0x80, 
	0xFF, 0x8D, 0x3C, 0xB5, 0x00, 0x00, 0x80, 0xFF, 0xC1, 0xE8, 0x0C, 0xC1, 0xE0, 0x04, 0x03, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x89, 0x45, 0xF8, 0xF6, 0x43, 0x03, 0x08, 0x74, 0x75, 0x51, 0xE8, 0xED, 
	0x37, 0x00, 0x00, 0x8A, 0x43, 0x02, 0xFF, 0x05, 0x00, 0x00, 0x00, 0x00, 0x83, 0xE0, 0x7F, 0xFF, 
	0x34, 0x85, 0x00, 0x00, 0x00, 0x00, 0x53, 0xE8, 0xE9, 0x20, 0x00, 0x00, 0x8B, 0x45, 0xF8, 0xFF, 
	0x75, 0xFC, 0x8B, 0x70, 0x04, 0xE8, 0x2C, 0xFE, 0xFF, 0xFF, 0xA1, 0x00, 0x00, 0x00, 0x00, 0xFF, 
	0x05, 0x00, 0x00, 0x00, 0x00, 0x89, 0x1C, 0x85, 0x00, 0x00, 0x00, 0x00, 0x40, 0x83, 0xF8, 0x1A, 
	0xA3, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x07, 0x83, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, 0x73, 
	0x06, 0x8A, 0x43, 0x03, 0x24, 0xE7, 0x88, 0x43, 0x03, 0x53, 0xE8, 0x84, 0xF3, 0xFF, 0xFF, 0xFF, 
	0x75, 0x08, 0xE8, 0x7A, 0x37, 0x00, 0x00, 0xFF, 0x0D, 0x00, 0x00, 0x00, 0x00, 0xE9, 0xB0, 0x00, 
	0x00, 0x00, 0x8D, 0x45, 0xF4, 0x50, 0x6A, 0x01, 0x56, 0xE8, 0x9F, 0xF5, 0xFF, 0xFF, 0x2B, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x6A, 0x0C, 0x31, 0xD2, 0x59, 0xF7, 0xF1, 0x8B, 0x0F, 0x81, 0xE1, 0xFF, 
	0x05, 0x00, 0x00, 0xC1, 0xE0, 0x0C, 0x09, 0xC8, 0x89, 0x07, 0xE8, 0x97, 0xF3, 0xFF, 0xFF, 0x6A, 
	0x08, 0x6A, 0x00, 0x6A, 0x03, 0x6A, 0x01, 0x56, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x83, 0xC4, 0x14, 
	0xA1, 0x00, 0x00, 0x00, 0x00, 0x48, 0xA3, 0x00, 0x00, 0x00, 0x00, 0xA1, 0x00, 0x00, 0x00, 0x00, 
	0x48, 0xA3, 0x00, 0x00, 0x00, 0x00, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x69, 0xC0, 0xFF, 0xFF, 0xFF, 
	0x00, 0x03, 0x43, 0x06, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x35, 0x00, 0x00, 0x00, 0x00, 
	0xC1, 0xE0, 0x08, 0x89, 0xC2, 0x33, 0x11, 0x81, 0xE2, 0xFF, 0x0F, 0x00, 0x00, 0x31, 0xC2, 0x8B, 
	0x45, 0x08, 0x89, 0x11, 0xE8, 0x0F, 0x3E, 0x00, 0x00, 0x8B, 0x78, 0x10, 0x50, 0xF3, 0xA5, 0xE8, 
	0xDD, 0x36, 0x00, 0x00, 0xFF, 0x75, 0x08, 0xFF, 0x0D, 0x00, 0x00, 0x00, 0x00, 0xE8, 0xFC, 0x36, 
	0x00, 0x00, 0x53, 0xE8, 0xCB, 0xF2, 0xFF, 0xFF, 0x6A, 0x00, 0xFF, 0x75, 0xFC, 0xE8, 0x4D, 0x49, 
	0x00, 0x00, 0xFF, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x5E, 0x5B, 0xC9, 0xC3, 
};

/* bitmap of modify bytes */
const uint8_t vmm_patch_me1_modif[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

#endif /* __VMM_PATCH_ME1_H__INCLUDED__ */
