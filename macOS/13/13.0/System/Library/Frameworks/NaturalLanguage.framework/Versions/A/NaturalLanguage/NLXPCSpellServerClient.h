@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

+ (id)spellServerClient;
+ (void)requestAssetsForLanguage:(id)a0;

- (void)dealloc;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)connection;
- (id)serverName;
- (id)initWithServerName:(id)a0;
- (void)sendCommand:(id)a0;

@end
