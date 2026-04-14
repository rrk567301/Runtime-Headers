@class NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL enableManualMode;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NEFilterProviderConfiguration *provider;
@property (nonatomic) long long grade;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;

@end
