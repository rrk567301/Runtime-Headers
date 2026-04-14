@class _TtC25UnifiedMessagingKitJSCore9JSAccount;

@interface UnifiedMessagingKitJSCore.JSAccountStore : NSObject <UnifiedMessagingKitJSCore.JSAccountStoreExports>

@property (nonatomic, readonly) _TtC25UnifiedMessagingKitJSCore9JSAccount *activeiTunes;
@property (nonatomic, readonly) _TtC25UnifiedMessagingKitJSCore9JSAccount *activeiCloud;
@property (nonatomic, readonly) _TtC25UnifiedMessagingKitJSCore9JSAccount *localAccount;

- (id)init;
- (id)activeiTunesForMediaType:(long long)a0;
- (id)localAccountForMediaType:(long long)a0;

@end
