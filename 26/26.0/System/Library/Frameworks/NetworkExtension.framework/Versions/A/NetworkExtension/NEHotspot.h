@class NSString, NSArray;

@interface NEHotspot : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *pluginType;
@property (copy) NSString *evaluationProviderBundleIdentifier;
@property (copy) NSString *authenticationProviderBundleIdentifier;
@property (copy) NSArray *safariDomains;
@property (copy) NSArray *evaluatedSSIDs;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)overlapsWithConfiguration:(id)a0;

@end
