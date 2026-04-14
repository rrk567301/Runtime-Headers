@class NSMutableDictionary;

@interface TCPreferences : NSObject

@property (retain, nonatomic) NSMutableDictionary *properties;
@property (readonly) long long devicePolicy;

+ (void)setOverridePreferences:(id)a0;
+ (id)userPreferences;
+ (id)defaultPreferences;

- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (void)setDevicePolicy:(long long)a0;

@end
