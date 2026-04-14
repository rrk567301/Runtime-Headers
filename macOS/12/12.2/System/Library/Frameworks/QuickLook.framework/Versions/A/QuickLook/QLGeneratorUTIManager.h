@interface QLGeneratorUTIManager : NSObject

+ (BOOL)_shouldUseLegacyGeneratorForType:(id)a0 extensionType:(unsigned long long)a1 isViewBased:(BOOL *)a2;
+ (void)_setupTestGenerator:(struct __QLGenerator { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __CFURL *x1; struct __CFBundle *x2; struct __CFString *x3; char *x4; struct __CFString *x5; struct __CFString *x6; struct __CFArray *x7; void *x8; unsigned char x9; id x10; double x11; id x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; unsigned char x17; unsigned char x18; unsigned char x19; unsigned char x20; unsigned char x21; double x22; struct CGSize { double x0; double x1; } x23; unsigned char x24; void *x25; void *x26; int x27; unsigned char x28; unsigned char x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; } *)a0 withDisplayBundleID:(id)a1;
+ (BOOL)isUsingTestDatabase;
+ (void)_resetGeneratorsForTesting;
+ (BOOL)shouldUseLegacyGeneratorForThumbnailType:(id)a0;
+ (BOOL)shouldUseLegacyGeneratorForPreviewType:(id)a0 isViewBased:(BOOL *)a1;
+ (void)_setTestDatabaseWithMockGenerators:(id)a0;
+ (void)_clearTestGenerators;

@end
