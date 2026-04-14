@class FigAssetVariantQualifierWithPredicateObjC;

@interface AVAssetVariantQualifierWithPredicate : AVAssetVariantQualifier <NSSecureCoding> {
    FigAssetVariantQualifierWithPredicateObjC *_figAssetVariantQualifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_figAssetVariantQualifier;
- (BOOL)_validatePredicate:(id)a0 error:(id *)a1;
- (id)initWithFigAssetVariantQualifierWithPredicate:(id)a0;

@end
