@class SlowNetworkUtil, NSString, NSDictionary;

@interface SlowNetworkCondition : COCondition

@property (nonatomic) BOOL running;
@property (retain, nonatomic) SlowNetworkUtil *util;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSDictionary *profileData;

+ (id)description;
+ (id)descriptionWithProfileParamsForProfile:(id)a0;

- (BOOL)active;
- (BOOL)isInternalOnly;
- (void)tearDown;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (BOOL)setUp;
- (BOOL)isDestructive;
- (id)identifierName;
- (BOOL)isNLCPrefPaneActive;
- (id)userFriendlyName;

@end
