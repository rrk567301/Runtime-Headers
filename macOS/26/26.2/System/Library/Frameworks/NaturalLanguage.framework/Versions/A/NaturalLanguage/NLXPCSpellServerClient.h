@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

+ (void)requestAssetsForLanguage:(id)a0;
+ (id)spellServerClient;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)connection;
- (void)dealloc;
- (id)initWithServerName:(id)a0;
- (id)serverName;
- (void)sendCommand:(id)a0;

@end
