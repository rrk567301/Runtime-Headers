@interface NudityDetectionPreferencesHelper : NSObject

+ (id)classForNudityDetectionSettings;
+ (id)classForNudityAppDetectionSettings;
+ (void)initializeNudityDetection;
+ (id)mainNudityDetectionFooterText;
+ (char)nudityDetectionAvailableForBundleID:(id)a0;
+ (char)nudityDetectionFeatureEnabled;
+ (id)nudityDetectionOnOffLabel;
+ (id)nudityDetectionOnOffLabelForBundleID:(id)a0;
+ (char)nudityDetectionRowEnabled;
+ (id)nudityDetectionRowIconID;
+ (id)nudityDetectionRowLabel;

- (id)init;

@end
