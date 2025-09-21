@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long position;
@property (nonatomic, getter=isKeyAsset) char keyAsset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proposedScopedIdentifierForItemScopedIdentifier:(id)a0;

@end
