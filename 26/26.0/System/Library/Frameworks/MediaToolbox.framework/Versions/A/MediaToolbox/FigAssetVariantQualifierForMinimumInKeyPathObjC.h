@class NSString;

@interface FigAssetVariantQualifierForMinimumInKeyPathObjC : FigAssetVariantQualifierObjC <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_keyPath;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0;

@end
