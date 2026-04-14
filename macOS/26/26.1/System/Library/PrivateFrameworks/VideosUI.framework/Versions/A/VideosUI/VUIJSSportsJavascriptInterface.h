@class NSString;

@interface VUIJSSportsJavascriptInterface : NSObject {
    void /* unknown type, empty encoding */ tierManagerClientType;
}

@property (nonatomic, weak) void /* function */ context;
@property (nonatomic, readonly) NSString *storefrontId;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)checkActivityExistsFor:(id)a0;
- (id)getTierTypeWithLeagueId:(id)a0;
- (id)isPlayByPlayEnabledWithLeagueId:(id)a0;
- (id)isSportsFeatureEnabledWithLeagueId:(id)a0 featureName:(id)a1;

@end
