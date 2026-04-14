@class NSArray, SLInteractionHandler, NSMutableDictionary, NSString, NSObject, NSDate;
@protocol OS_dispatch_queue, SLHighlightCenterDelegate;

@interface SLHighlightCenter : NSObject

@property (retain, nonatomic) SLInteractionHandler *interactionHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *highlightCenterQueue;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly, nonatomic) int notificationTokenRefreshHighlights;
@property (readonly, nonatomic) int notificationTokenDeleteHighlights;
@property (readonly, nonatomic) int notificationTokenSettingsChanges;
@property (readonly, nonatomic) int notificationTokenAppSettingsChanges;
@property (nonatomic) unsigned long long numberOfItemsRequested;
@property (retain, nonatomic) NSArray *currentHighlights;
@property (retain, nonatomic) NSMutableDictionary *attributionMap;
@property (readonly, nonatomic) double highlightsRankingScore;
@property (retain, nonatomic) NSString *variant;
@property (weak, nonatomic) id<SLHighlightCenterDelegate> delegate;
@property (readonly, nonatomic) double decay;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *latestHighlightDate;

+ (BOOL)isEnabled;
+ (BOOL)isAutomaticSharingEnabled;
+ (BOOL)_isShareWithYouOnboarded;
+ (BOOL)_isShareWithYouEnabled;
+ (BOOL)_bundleIDExistsInPreferences:(id)a0;
+ (BOOL)shouldShowOnboardingShieldView;
+ (id)rapportClient;
+ (void)_checkAndInitializeBundleIDToAppPreferences:(id)a0;
+ (id)SLVariantDefault;
+ (void)shouldShowOnboardingShieldViewForNearbyDevice:(id /* block */)a0;
+ (id)SLVariantNewsToday;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)feedbackForHighlight:(id)a0 withType:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)fetchHighlightsWithLimit:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)feedbackForHighlight:(id)a0 withType:(unsigned long long)a1;
- (void)didRefreshHighlights;
- (void)didDeleteHighlightsOrAttributions;
- (void)enablementStateChanged;
- (void)appEnablementStateChanged;
- (id)initWithAppIdentifier:(id)a0;
- (id)fetchAttributionForAttributionIdentifier:(id)a0;
- (id)fetchAttributionsForHighlight:(id)a0;

@end
