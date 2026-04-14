@class GDEntityIdentifier;

@interface GDEntitySimilarityRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long entitySimilarityMode;
@property (readonly, copy, nonatomic) GDEntityIdentifier *entityId1;
@property (readonly, copy, nonatomic) GDEntityIdentifier *entityId2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEntityId1:(id)a0 entityId2:(id)a1 entitySimilarityMode:(long long)a2;

@end
