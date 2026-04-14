@class _TtC25UnifiedMessagingKitJSCore9JSAccount;

@interface UnifiedMessagingKitJSCore.JSAccountStore : NSObject <UnifiedMessagingKitJSCore.JSAccountStoreExports> {
    void /* unknown type, empty encoding */ currentAccount;
}

@property (nonatomic, readonly) _TtC25UnifiedMessagingKitJSCore9JSAccount *current;
@property (nonatomic, readonly) _TtC25UnifiedMessagingKitJSCore9JSAccount *activeiTunes;
@property (nonatomic, readonly) _TtC25UnifiedMessagingKitJSCore9JSAccount *activeiCloud;
@property (nonatomic, readonly) _TtC25UnifiedMessagingKitJSCore9JSAccount *localAccount;

- (id)init;
- (void).cxx_destruct;
- (id)activeiTunesForMediaType:(long long)a0;
- (id)localAccountForMediaType:(long long)a0;

@end
