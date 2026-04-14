@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;
+ (id)codedPropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serverRepresentation;
- (id)descriptionSubstitutionMap;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)mergePropertiesFrom:(id)a0;

@end
