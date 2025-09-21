@interface VUIDebugDefaults : NSObject

@property (nonatomic) char debugUIEnabled;
@property (nonatomic) char pagePerformanceEnabled;
@property (nonatomic) char metricsLoggingEnabled;
@property (nonatomic) char metricsExpandedLoggingEnabled;
@property (nonatomic) char metricsLogLocationAndImpressions;
@property (nonatomic) char metricsPageRenderLoggingEnabled;
@property (nonatomic) char enableDemoMode;
@property (nonatomic) char gdprFirstTimeFlowEnabled;
@property (nonatomic) char gdprWhatsNewFlowEnabled;
@property (nonatomic) char debugRefreshEventLogEnabled;
@property (nonatomic) char playbackOverridesEnabled;
@property (nonatomic) char hoverEffectDisabled;
@property (nonatomic) char impressionTrackingDisabled;
@property (nonatomic) char stackedTextUseTypeAsViewIdEnabled;
@property (nonatomic) char iTunesExtrasSwiftUIMock;
@property (nonatomic) char capellaDebuggerEnabled;
@property (nonatomic) char capellaMockedDataEnabled;
@property (nonatomic) char capellaMusicInfoEnabled;
@property (nonatomic) char performanceDebuggerEnabled;
@property (nonatomic) char performanceDebuggerVerboseEnabled;
@property (nonatomic) char useExperienceControllerForAllContent;

+ (id)sharedInstance;

- (id)init;

@end
