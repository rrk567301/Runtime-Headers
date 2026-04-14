@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)internalRepresentation;
+ (id)codedPropertyKeys;
+ (id)secureCodedPropertyKeys;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionSubstitutionMap;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)serverRepresentation;
- (void)mergePropertiesFrom:(id)a0;

@end
