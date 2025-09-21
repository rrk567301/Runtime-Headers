@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;
+ (id)codedPropertyKeys;
+ (id)secureCodedJsonTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)descriptionSubstitutionMap;
- (void)mergePropertiesFrom:(id)a0;
- (id)serverRepresentation;

@end
