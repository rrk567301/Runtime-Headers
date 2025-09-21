@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    char _invalidated;
}

+ (void)requestAssetsForLanguage:(id)a0;
+ (id)spellServerClient;

- (void)dealloc;
- (char)isValid;
- (void).cxx_destruct;
- (id)connection;
- (id)initWithServerName:(id)a0;
- (id)serverName;
- (void)sendCommand:(id)a0;

@end
