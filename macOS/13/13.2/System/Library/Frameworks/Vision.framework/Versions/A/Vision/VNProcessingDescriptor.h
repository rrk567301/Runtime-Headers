@interface VNProcessingDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)availableVersionsForIdentifier:(id)a0 error:(id *)a1;
+ (id)availableIdentifiers;
+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;
+ (id)descriptorsForIdentifier:(id)a0 error:(id *)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
