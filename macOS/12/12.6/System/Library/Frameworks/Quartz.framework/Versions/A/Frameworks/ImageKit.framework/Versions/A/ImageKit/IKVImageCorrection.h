@interface IKVImageCorrection : IKImageCorrection

+ (id)filterWithName:(id)a0 identifier:(id)a1;

- (id)description;
- (BOOL)isIdentity;
- (void)setCorrectionEnabled:(BOOL)a0;
- (id)processedImage:(id)a0 ciContext:(id)a1 cgContext:(struct CGContext { } *)a2;

@end
