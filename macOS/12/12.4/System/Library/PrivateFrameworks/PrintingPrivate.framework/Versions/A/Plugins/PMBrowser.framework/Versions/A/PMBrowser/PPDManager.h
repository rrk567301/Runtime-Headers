@interface PPDManager : NSObject

+ (id)defaultManager;
+ (int)ppdKind:(id)a0;
+ (id)localizedPPD:(id)a0;
+ (id)softwareUpdateDriverFor:(id)a0 airprint:(BOOL)a1;
+ (id)genericSystemPPD:(id)a0;
+ (BOOL)isFaxPPD:(id)a0;
+ (id)parsePPD:(const char *)a0;
+ (BOOL)isPPDFile:(const char *)a0;
+ (BOOL)isValidPPD:(id)a0;
+ (BOOL)isPostscriptPPD:(id)a0;
+ (BOOL)isRasterPPD:(id)a0;
+ (unsigned int)stringEncoding:(struct ppd_file_s { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char *x10; int x11; struct ppd_emul_s *x12; char *x13; char *x14; char *x15; char *x16; char *x17; char *x18; char *x19; char *x20; char *x21; char *x22; char *x23; int x24; struct ppd_group_s *x25; int x26; struct ppd_size_s *x27; float x28[2]; float x29[2]; float x30[4]; int x31; struct ppd_const_s *x32; int x33; char **x34; int x35; struct ppd_profile_s *x36; int x37; char **x38; int x39; char *x40; char *x41; int x42; int x43; struct ppd_attr_s **x44; struct _cups_array_s *x45; struct _cups_array_s *x46; struct _cups_array_s *x47; struct _cups_array_s *x48; struct _cups_array_s *x49; struct _ppd_cache_s *x50; } *)a0;
+ (id)softwareUpdateForPPD:(struct ppd_file_s { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char *x10; int x11; struct ppd_emul_s *x12; char *x13; char *x14; char *x15; char *x16; char *x17; char *x18; char *x19; char *x20; char *x21; char *x22; char *x23; int x24; struct ppd_group_s *x25; int x26; struct ppd_size_s *x27; float x28[2]; float x29[2]; float x30[4]; int x31; struct ppd_const_s *x32; int x33; char **x34; int x35; struct ppd_profile_s *x36; int x37; char **x38; int x39; char *x40; char *x41; int x42; int x43; struct ppd_attr_s **x44; struct _cups_array_s *x45; struct _cups_array_s *x46; struct _cups_array_s *x47; struct _cups_array_s *x48; struct _cups_array_s *x49; struct _ppd_cache_s *x50; } *)a0;

- (id)ppdFileWithName:(const char *)a0;
- (id)matchPPDsByDeviceID:(id)a0 model:(id)a1 product:(id)a2;
- (id)matchPPDsByDeviceID:(id)a0 model:(id)a1 product:(id)a2 fromList:(id)a3;
- (id)ppds;
- (id)ppdsOfType:(id)a0;
- (id)ppdFile:(id)a0;
- (id)matchPPDsByProduct:(id)a0;
- (id)matchPPDsByProduct:(id)a0 fromList:(id)a1;
- (id)matchPPDsByModel:(id)a0;
- (id)matchPPDsByModel:(id)a0 fromList:(id)a1;
- (id)faxPPDs;
- (id)rasterPPDs;
- (id)postscriptPPDs;
- (id)genericPostscriptPPD;
- (id)genericPCLPPD;
- (id)genericFaxPPD;
- (id)genericURFPPD;

@end
