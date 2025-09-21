@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind

@property (readonly, nonatomic) NSDictionary *relationshipKinds;

+ (char)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithRelationshipKinds:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanDescription;

@end
