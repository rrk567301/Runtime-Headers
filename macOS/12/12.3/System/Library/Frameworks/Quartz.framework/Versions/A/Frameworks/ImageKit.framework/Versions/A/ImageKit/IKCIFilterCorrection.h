@class CIFilter;

@interface IKCIFilterCorrection : IKImageCorrection

@property (retain, nonatomic) CIFilter *filter;

+ (id)filterWithName:(id)a0 identifier:(id)a1;

- (id)description;
- (id)name;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)attributes;
- (BOOL)isIdentity;
- (void)setDefaults;
- (id)processedImage:(id)a0 ciContext:(id)a1 cgContext:(struct CGContext { } *)a2;
- (id)initWithClassName:(id)a0 identifier:(id)a1;
- (void)updateMinMax;

@end
