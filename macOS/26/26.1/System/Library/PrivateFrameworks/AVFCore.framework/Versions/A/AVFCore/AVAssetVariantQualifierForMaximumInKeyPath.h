@class FigAssetVariantQualifierForMaximumInKeyPathObjC;

@interface AVAssetVariantQualifierForMaximumInKeyPath : AVAssetVariantQualifier <NSSecureCoding> {
    FigAssetVariantQualifierForMaximumInKeyPathObjC *_figAssetVariantQualifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)_validateKeyPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_figAssetVariantQualifier;
- (id)initWithFigAssetVariantQualifierForMaximumInKeyPath:(id)a0;

@end
