@class NSString, NSUserDefaults;

@interface CHUISPreferences : NSObject {
    NSUserDefaults *_defaults;
}

@property (readonly, nonatomic) char enableMemoryStressTestingWithGaspar;
@property (readonly, nonatomic) char debugViewLabels;
@property (readonly, nonatomic) char debugSnapshotViewColoring;
@property (readonly, nonatomic) char debugPrefersStaticSnapshots;
@property (readonly, nonatomic) NSString *widgetRenderer;
@property (readonly, nonatomic) char userWantsWidgetDataWhenPasscodeLocked;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
