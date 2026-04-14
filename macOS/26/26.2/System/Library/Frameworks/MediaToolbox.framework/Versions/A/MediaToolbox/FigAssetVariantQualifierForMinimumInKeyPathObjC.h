@class NSString;

@interface FigAssetVariantQualifierForMinimumInKeyPathObjC : FigAssetVariantQualifierObjC <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_keyPath;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithKeyPath:(id)a0;
- (void)dealloc;

@end
