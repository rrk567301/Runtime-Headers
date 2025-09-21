@class NSString;

@interface SGPSInteractionLookup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *detail;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDetail:(id)a0;
- (id)interactionInformation;
- (id)interactionString;
- (char)isEqualToPSInteractionLookup:(id)a0;
- (id)resolveAppNameForBundleId:(id)a0;
- (id)resourceBundle;

@end
