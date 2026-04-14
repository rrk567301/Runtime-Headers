@class TPSSizes;

@interface TPSAssetSizes : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TPSSizes *tip;
@property (retain, nonatomic) TPSSizes *tipIntro;
@property (retain, nonatomic) TPSSizes *collectionFeatured;
@property (retain, nonatomic) TPSSizes *thumbnail;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
