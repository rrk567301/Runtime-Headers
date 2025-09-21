@interface HMDMetricsUtilities : NSObject

+ (id)primaryServiceTypeForHAPAccessory:(id)a0;
+ (id)redactedThirdPartyBundleID:(id)a0;
+ (id)redactedThirdPartyBundleID:(id)a0 isInternalBuild:(char)a1;
+ (char)shouldRedactBundleID:(id)a0;
+ (char)shouldRedactBundleID:(id)a0 isInternalBuild:(char)a1;

@end
