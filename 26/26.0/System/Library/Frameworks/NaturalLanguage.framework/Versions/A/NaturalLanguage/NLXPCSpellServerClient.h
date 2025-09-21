@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

+ (void)requestAssetsForLanguage:(id)a0;
+ (id)spellServerClient;

- (BOOL)isValid;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithServerName:(id)a0;
- (id)serverName;
- (void)sendCommand:(id)a0;

@end
