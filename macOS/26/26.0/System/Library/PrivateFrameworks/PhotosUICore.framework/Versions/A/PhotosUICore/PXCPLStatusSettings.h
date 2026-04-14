@class NSNumber;

@interface PXCPLStatusSettings : PXSettings

@property (retain, nonatomic) NSNumber *resumeOverrideHours;
@property (retain, nonatomic) NSNumber *shouldHideMockStatusWarning;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (void).cxx_destruct;

@end
