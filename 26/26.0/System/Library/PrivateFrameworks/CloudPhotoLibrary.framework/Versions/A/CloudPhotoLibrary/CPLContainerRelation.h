@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long position;
@property (nonatomic, getter=isKeyAsset) BOOL keyAsset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)proposedScopedIdentifierForItemScopedIdentifier:(id)a0;

@end
