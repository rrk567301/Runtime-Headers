@class NSByteCountFormatter, SAFNotificationConfiguration, SAFLocalization;

@interface SAFAssetAvailabilityReporter : NSObject {
    void /* unknown type, empty encoding */ statusSource;
    void /* unknown type, empty encoding */ assetSetSubscribers;
    void /* unknown type, empty encoding */ updateAssets;
    void /* unknown type, empty encoding */ openURL;
    void /* unknown type, empty encoding */ emitInstrumentation;
}

@property (nonatomic, readonly) SAFLocalization *strings;
@property (nonatomic, readonly) NSByteCountFormatter *byteCountFormatter;

- (BOOL)isAvailable;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)notificationForUnavailabilityReason:(void (^)(SAFNotificationConfiguration *))a0;
- (void)notificationForUnavailabilityReasonWithContext:(long long)a0 completion:(void (^)(SAFNotificationConfiguration *))a1;

@end
