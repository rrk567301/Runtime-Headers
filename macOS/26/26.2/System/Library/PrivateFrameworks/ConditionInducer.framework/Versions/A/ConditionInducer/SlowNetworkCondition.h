@class SlowNetworkUtil, NSString, NSDictionary;

@interface SlowNetworkCondition : COCondition

@property (nonatomic) BOOL running;
@property (retain, nonatomic) SlowNetworkUtil *util;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSDictionary *profileData;

+ (id)description;
+ (id)descriptionWithProfileParamsForProfile:(id)a0;

- (void)tearDown;
- (BOOL)active;
- (void).cxx_destruct;
- (BOOL)setUp;
- (BOOL)isInternalOnly;
- (id)initWithProfile:(id)a0;
- (BOOL)isDestructive;
- (id)identifierName;
- (BOOL)isNLCPrefPaneActive;
- (id)userFriendlyName;

@end
