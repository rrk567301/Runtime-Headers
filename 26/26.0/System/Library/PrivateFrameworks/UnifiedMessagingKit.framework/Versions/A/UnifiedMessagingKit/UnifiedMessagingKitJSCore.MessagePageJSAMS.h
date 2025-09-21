@class NSDictionary;
@protocol _TtP25UnifiedMessagingKitJSCore26JSUserNotificationsExports_, _TtP25UnifiedMessagingKitJSCore21JSAccountStoreExports_, _TtP25UnifiedMessagingKitJSCore12JSLogExports_, _TtP25UnifiedMessagingKitJSCore16JSPrivacyExports_, _TtP25UnifiedMessagingKitJSCore15JSDeviceExports_, _TtP25UnifiedMessagingKitJSCore17JSLocationExports_, _TtP25UnifiedMessagingKitJSCore17JSLocalizeExports_;

@interface UnifiedMessagingKitJSCore.MessagePageJSAMS : NSObject <_TtP25UnifiedMessagingKitJSCoreP33_09CD063935F8C8474053450E88333F2023MessagePageJSAMSExports_> {
    void /* function */ props;
}

@property (nonatomic, readonly) id<_TtP25UnifiedMessagingKitJSCore21JSAccountStoreExports_> accounts;
@property (nonatomic, readonly) id<_TtP25UnifiedMessagingKitJSCore15JSDeviceExports_> device;
@property (nonatomic, readonly) id<_TtP25UnifiedMessagingKitJSCore17JSLocalizeExports_> localize;
@property (nonatomic, readonly) id<_TtP25UnifiedMessagingKitJSCore17JSLocationExports_> location;
@property (nonatomic, readonly) id<_TtP25UnifiedMessagingKitJSCore12JSLogExports_> log;
@property (nonatomic, readonly) id<_TtP25UnifiedMessagingKitJSCore16JSPrivacyExports_> privacy;
@property (nonatomic, readonly) NSDictionary *props;
@property (nonatomic, readonly) id<_TtP25UnifiedMessagingKitJSCore26JSUserNotificationsExports_> userNotifications;

- (id)init;
- (void).cxx_destruct;

@end
