@interface NudityDetectionPreferencesHelper : NSObject

+ (id)classForNudityDetectionSettings;
+ (id)classForNudityAppDetectionSettings;
+ (id)mainNudityDetectionFooterText;
+ (BOOL)nudityDetectionAvailableForBundleID:(id)a0;
+ (BOOL)nudityDetectionFeatureEnabled;
+ (id)nudityDetectionOnOffLabel;
+ (id)nudityDetectionOnOffLabelForBundleID:(id)a0;
+ (BOOL)nudityDetectionRowEnabled;
+ (id)nudityDetectionRowIconID;
+ (id)nudityDetectionRowLabel;

- (id)init;

@end
