@class CIFilter;

@interface IKCIFilterCorrection : IKImageCorrection

@property (retain, nonatomic) CIFilter *filter;

+ (id)filterWithName:(id)a0 identifier:(id)a1;

- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setDefaults;
- (id)description;
- (void)dealloc;
- (id)attributes;
- (id)name;
- (BOOL)isIdentity;
- (id)initWithClassName:(id)a0 identifier:(id)a1;
- (id)processedImage:(id)a0 ciContext:(id)a1 cgContext:(struct CGContext { } *)a2;
- (void)updateMinMax;

@end
