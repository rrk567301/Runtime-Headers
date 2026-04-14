@interface LFSMSession : NSObject

@property int sessionID;

+ (id)currentSession;
+ (id)allSessions;
+ (id)defaultOptions;
+ (id)sessionForUser:(unsigned int)a0;
+ (BOOL)isThisSessionOnConsole;
+ (id)sessionByListener:(id)a0 withOptions:(id)a1;
+ (id)sessionWithCGSessionID:(unsigned int)a0;
+ (id)sessionWithOptions:(id)a0;
+ (id)sessionWithSessionID:(int)a0;
+ (void)signalSessionReady;

- (id)properties;
- (id)initWithSessionID:(int)a0;
- (int)close;
- (void)bringOnConsoleWithOptions:(id)a0;

@end
