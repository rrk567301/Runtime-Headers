@class NSString;

@interface FigAssetVariantQualifierForMaximumInKeyPathObjC : FigAssetVariantQualifierObjC <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_keyPath;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyPath:(id)a0;

@end
