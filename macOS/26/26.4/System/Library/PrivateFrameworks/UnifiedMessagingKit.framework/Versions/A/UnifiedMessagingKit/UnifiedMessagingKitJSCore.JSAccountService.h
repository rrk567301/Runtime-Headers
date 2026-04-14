@class JSValue;

@interface UnifiedMessagingKitJSCore.JSAccountService : NSObject <UnifiedMessagingKitJSCore.JSAccountServiceExports> {
    void /* unknown type, empty encoding */ accountStore;
}

@property (nonatomic, readonly) JSValue *activeiTunes;
@property (nonatomic, readonly) JSValue *activeiCloud;
@property (nonatomic, readonly) JSValue *localAccount;

- (void).cxx_destruct;
- (id)init;
- (id)activeiTunesForMediaType:(long long)a0;
- (id)localAccountForMediaType:(long long)a0;

@end
