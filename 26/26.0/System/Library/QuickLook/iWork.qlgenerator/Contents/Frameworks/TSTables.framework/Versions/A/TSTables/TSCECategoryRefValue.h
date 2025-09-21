@class TSCECategoryRef;

@interface TSCECategoryRefValue : TSCEValue

@property (readonly, nonatomic) TSCECategoryRef *categoryRef;

+ (id)categoryRefValue:(id)a0;
+ (id)emptyCategoryRefValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)asCategoryRef;
- (id)asGrid:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 applyPreferredFormat:(BOOL)a3 outError:(id *)a4;
- (char)nativeType;
- (BOOL)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asCategoryRefValue;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; })asRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (char)deepType:(id)a0 outError:(id *)a1;
- (id)initWithCategoryRef:(id)a0;
- (id)initWithCategoryRef:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;
- (BOOL)isCategoryRefValue;
- (id)referredToValue:(id)a0;

@end
