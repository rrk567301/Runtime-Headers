@class NSString, FASettingsPresetConfiguration;

@interface FASettingsPresetSource : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) FASettingsPresetConfiguration *configuration;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;

@end
