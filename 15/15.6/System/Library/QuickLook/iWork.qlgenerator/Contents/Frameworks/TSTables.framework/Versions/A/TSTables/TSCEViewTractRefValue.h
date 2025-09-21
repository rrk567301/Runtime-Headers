@class TSCEViewTractRef;

@interface TSCEViewTractRefValue : TSCEValue

@property (readonly, nonatomic) TSCEViewTractRef *viewTractRef;

+ (id)viewTractRefValue:(id)a0;

- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)asGrid:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 applyPreferredFormat:(char)a3 outError:(id *)a4;
- (id)asViewTractRefValue;
- (char)nativeType;
- (char)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (struct TSCERichTextStorage { id x0; id x1; char x2; char x3; char x4; })asRichTextStorage:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (char)deepType:(id)a0 outError:(id *)a1;
- (id)initWithViewTractRef:(id)a0;
- (id)initWithViewTractRef:(id)a0 format:(const struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; char x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } *)a1;
- (char)isViewTractRefValue;
- (id)referredToValue:(id)a0;

@end
