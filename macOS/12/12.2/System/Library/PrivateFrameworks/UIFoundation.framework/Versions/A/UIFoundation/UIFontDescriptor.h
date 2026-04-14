@class NSMutableDictionary;

@interface UIFontDescriptor : NSFontDescriptor {
    NSMutableDictionary *_attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)_createMungledDictionary:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (void)prepareMatrixMethods;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1 options:(unsigned long long)a2;
+ (id)_preferredFontDescriptorWithTextStyle:(id)a0 weight:(double)a1;
+ (id)_preferredFontDescriptorWithTextStyle:(id)a0 design:(id)a1 weight:(double)a2;
+ (id)_preferredFontDescriptorWithTextStyle:(id)a0 design:(id)a1 weight:(double)a2 compatibleWithTraitCollection:(id)a3;
+ (id)_preferredFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1 design:(id)a2 weight:(double)a3 compatibleWithTraitCollection:(id)a4;
+ (id)defaultFontDescriptorWithTextStyle:(id)a0;
+ (id)defaultFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1 options:(unsigned long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_attributes;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)a0 mask:(unsigned int)a1;
- (id)postscriptName;
- (id)fontAttributes;
- (id)initWithFontAttributes:(id)a0;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)a0;
- (id)_fontDescriptorWithMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_matrix;
- (id)_NSAffineTransform;
- (id)_swapWithFontAttributes:(id)a0 options:(unsigned long long)a1;

@end
