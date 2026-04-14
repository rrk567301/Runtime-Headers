@class NSMutableDictionary, ACRateLimiter;

@interface ACDAuthenticationPluginLoader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pluginAccessLock;
    NSMutableDictionary *_authenticationPluginsByType;
}

@property (retain, nonatomic) ACRateLimiter *renewalRateLimiter;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_ac_DMIsMigrationNeeded;
- (void)_setPlugin:(id)a0 forType:(id)a1;
- (id)pluginForAuthenticationType:(id)a0;

@end
