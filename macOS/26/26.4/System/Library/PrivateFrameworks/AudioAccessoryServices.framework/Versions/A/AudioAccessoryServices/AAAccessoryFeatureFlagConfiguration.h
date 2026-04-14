@class NSString, NSMutableDictionary;

@interface AAAccessoryFeatureFlagConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy) NSMutableDictionary *featureFlags;
@property (nonatomic) BOOL routed;

+ (id)createQueryMessage;
+ (id)createSetFeatureFlagMessage:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_applyConfigurationUpdate:(id)a0;
- (BOOL)_isConfigurationUpdateMessageValid:(id)a0;
- (BOOL)handleUpdate:(id)a0;

@end
