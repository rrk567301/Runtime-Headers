@class NSDictionary;

@interface PPFeatureRedactorGuardedData : NSObject {
    NSDictionary *_allowedFeatures;
    char _shouldRedactFeatures;
    char _shouldTranslateAllowedFeatures;
}

- (void).cxx_destruct;

@end
