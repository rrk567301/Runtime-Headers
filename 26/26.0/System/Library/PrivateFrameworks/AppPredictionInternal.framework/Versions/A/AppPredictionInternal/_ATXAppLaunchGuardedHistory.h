@class ATXHeroPoiManager, ATXDisplayOnIntervalStream, _ATXAppLaunchSequenceManager, ATXAppInFocusStream, _ATXAppDailyDose, _ATXAppInfoManager, NSMutableArray, _ATXAppLaunchHistogramManager;
@protocol ATXPredictionContextBuilderProtocol;

@interface _ATXAppLaunchGuardedHistory : NSObject {
    NSMutableArray *_deltaLog;
    ATXAppInFocusStream *_appInFocusStream;
    ATXDisplayOnIntervalStream *_displayOnIntervalStream;
    _ATXAppDailyDose *_appDailyDose;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXAppLaunchSequenceManager *_appLaunchSequenceManager;
    id<ATXPredictionContextBuilderProtocol> _contextBuilder;
    ATXHeroPoiManager *_heroPoiManager;
}

- (void).cxx_destruct;

@end
