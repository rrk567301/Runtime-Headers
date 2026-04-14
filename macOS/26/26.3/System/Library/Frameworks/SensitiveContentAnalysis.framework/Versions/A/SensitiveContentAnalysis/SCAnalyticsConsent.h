@interface SCAnalyticsConsent : NSObject

+ (BOOL)isEnabled;
+ (BOOL)_SCIsSensitiveContentDetectionAnalyticsEnabled;
+ (BOOL)_SCIsScreenTimeCommunicationSafetyAnalyticsEnabled;

@end
