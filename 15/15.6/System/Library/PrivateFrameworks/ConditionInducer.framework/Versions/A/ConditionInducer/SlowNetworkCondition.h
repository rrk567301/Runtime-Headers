@class SlowNetworkUtil, NSString, NSDictionary;

@interface SlowNetworkCondition : COCondition

@property (nonatomic) char running;
@property (retain, nonatomic) SlowNetworkUtil *util;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSDictionary *profileData;

+ (id)description;
+ (id)descriptionWithProfileParamsForProfile:(id)a0;

- (void).cxx_destruct;
- (char)active;
- (char)isDestructive;
- (void)tearDown;
- (id)initWithProfile:(id)a0;
- (char)setUp;
- (id)identifierName;
- (char)isInternalOnly;
- (char)isNLCPrefPaneActive;
- (id)userFriendlyName;

@end
