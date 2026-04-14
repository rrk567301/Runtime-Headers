@class NSString;

@interface SGPSInteractionLookup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *detail;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDetail:(id)a0;
- (id)interactionInformation;
- (id)interactionString;
- (BOOL)isEqualToPSInteractionLookup:(id)a0;
- (id)resolveAppNameForBundleId:(id)a0;
- (id)resourceBundle;

@end
