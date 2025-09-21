@class NSSet, NSString, NSDate, CPAnalytics, NSMutableArray;

@interface CPAnalyticsScreenManager : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (weak, nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (nonatomic) long long appVisiblePeriodSignpostID;
@property (retain, nonatomic) NSDate *currentScreenStartTime;
@property (nonatomic) long long screensViewCount;
@property (nonatomic) long long foregroundEventCount;
@property (retain, nonatomic) NSSet *namesOfViewsToTrack;
@property (retain, nonatomic) NSSet *namesOfViewsToIgnore;
@property (retain, nonatomic) NSMutableArray *currentlyOpenViews;
@property (retain, nonatomic) NSMutableArray *priorViews;
@property (retain, nonatomic) NSString *currentTabIdentifierDescription;
@property (retain, nonatomic) NSString *pendingTabIdentifierDescription;
@property (readonly, nonatomic) unsigned long long priorViewsMaxIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_isValidTabIdentifierChangedEvent:(id)a0;
+ (id)combinedViewName:(id)a0 withID:(id)a1;
+ (char)isDebugScreenForViewName:(id)a0;
+ (char)isValidScreenViewEvent:(id)a0;
+ (id)viewNameFromCombined:(id)a0;

- (void).cxx_destruct;
- (void)_handleUnknownViewIfNeeded:(id)a0;
- (void)_initializeScreenViewTrackers:(id)a0;
- (void)_resetSessionWithTime:(id)a0;
- (void)_sendCPAnalyticsScreenViewEventWithEndTime:(id)a0;
- (void)_trackView:(id)a0 withEventName:(id)a1 viewID:(id)a2 eventTime:(id)a3;
- (void)_updateAppLifeCycle:(id)a0;
- (void)_updateCurrentScreenToViewName:(id)a0 withEventTime:(id)a1;
- (void)_updateCurrentTabIdentifier:(id)a0;
- (void)_updateScreenTracking:(id)a0;
- (void)_updateTabTracking:(id)a0;
- (id)currentScreenViewName;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)lastScreenName;
- (void)processEvent:(id)a0;
- (void)registerSystemProperties:(id)a0;
- (id)screenViewNameAt:(unsigned long long)a0;
- (void)updateWithConfig:(id)a0;

@end
