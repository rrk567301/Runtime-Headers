@class FigAssetVariantQualifierForMinimumInKeyPathObjC;

@interface AVAssetVariantQualifierForMinimumInKeyPath : AVAssetVariantQualifier <NSSecureCoding> {
    FigAssetVariantQualifierForMinimumInKeyPathObjC *_figAssetVariantQualifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_validateKeyPath:(id)a0;
- (void)dealloc;
- (id)_figAssetVariantQualifier;
- (id)initWithFigAssetVariantQualifierForMinimumInKeyPath:(id)a0;

@end
