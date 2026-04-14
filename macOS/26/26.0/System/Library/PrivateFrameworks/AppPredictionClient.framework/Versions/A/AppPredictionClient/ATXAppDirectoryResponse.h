@class NSArray, NSDictionary, ATXAppDirectoryCategory, ATXSuggestionLayout, ATXResponse, NSError;

@interface ATXAppDirectoryResponse : NSObject {
    NSDictionary *_bundleIdToSuggestionMapping;
}

@property (readonly, nonatomic) ATXResponse *response;
@property (readonly, nonatomic) ATXSuggestionLayout *suggestionLayout;
@property (readonly, nonatomic) NSArray *recentAppsVisible;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *recentApps;
@property (readonly, nonatomic) NSArray *predictedAppIdentities;
@property (readonly, nonatomic) NSArray *recentAppIdentities;
@property (readonly, nonatomic) ATXAppDirectoryCategory *hiddenAppsCategory;

+ (BOOL)_canUseSuggestedApp:(id)a0 includeRemoteApps:(BOOL)a1;
+ (id)_getURLForBundleIdForSupportedApps:(id)a0;

- (id)proactiveSuggestionForBundleId:(id)a0;
- (id)proactiveSuggestionForIdentity:(id)a0;
- (id)initWithoutDedupingForRecents:(id)a0 predictedApps:(id)a1 hiddenApps:(id)a2 error:(id)a3;
- (id)_minuteZeroResponse;
- (void)_insertRecentlyInstalledAppsIntoPredictedAppsList:(id)a0 sortedRecentApps:(id)a1;
- (id)uuidForIdentities:(id)a0;
- (id)uuidForBundleId:(id)a0;
- (id)uuidForIdentity:(id)a0;
- (id)uuidsForBundleIds:(id)a0;
- (id)initWithSuggestionLayout:(id)a0 includeRemoteApps:(BOOL)a1 recentApps:(id)a2 hiddenApps:(id)a3 otherAppsOnScreen:(id)a4 numAppsToPredict:(unsigned long long)a5 error:(id)a6;
- (void).cxx_destruct;

@end
