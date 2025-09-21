@interface UPUtilities : NSObject

+ (BOOL)checkFileExistence:(id)a0 error:(id *)a1;
+ (id)higherLevelEntityLabelFromParentLabel:(id)a0 childLabel:(id)a1;
+ (id)intermediateNodeRepresentations:(id)a0;
+ (struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> { union __rep { struct __short { unsigned short x0[11]; struct __padding<1UL> { char x0[1]; } x1; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { unsigned short *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })nSStringToU16String:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromStart:(unsigned long long)a0 end:(unsigned long long)a1;
+ (id)rootNodeRepresentationForIntent:(id)a0 andEntities:(id)a1;
+ (id)stdU16ToNSString:(const void *)a0;

@end
