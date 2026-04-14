@class NSMutableDictionary;

@interface ATXFrontBoardLayoutAggregator : NSObject {
    NSMutableDictionary *_bundleIdentifierToVisibilityMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)fetchActiveApps;
- (BOOL)_isAppWithBundleIdentifierVisible:(id)a0;

@end
