@class NSString, NSDictionary;

@interface ATXOnboardingStackResultCacheManager : NSObject {
    NSString *_path;
    char _isiPad;
    NSDictionary *_appLaunchCounts;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchOnboardingStackResultCache;
- (id)_generateResultCacheWithWidgetCache:(id)a0;
- (id)_resultFromOnboardingStacks:(id)a0;
- (char)_writeOnboardingStackResultCache:(id)a0;
- (id)initWithPath:(id)a0 isiPad:(char)a1;
- (char)updateCacheWithActivity:(id)a0 widgetCache:(id)a1;

@end
