@class NSString, NSArray;

@interface PXDisplayAssetViewDemoSettings : PXSettings

@property (nonatomic) BOOL allowsTextSelection;
@property (copy, nonatomic) NSString *stringToHighlight;
@property (readonly, nonatomic) NSArray *stringsToHighlight;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)transientProperties;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (id)parentSettings;

@end
