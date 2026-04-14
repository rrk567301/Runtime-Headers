@interface LFSMSession : NSObject

@property int sessionID;

+ (id)defaultOptions;
+ (id)currentSession;
+ (id)sessionWithSessionID:(int)a0;
+ (id)allSessions;
+ (BOOL)isThisSessionOnConsole;
+ (id)sessionWithCGSessionID:(unsigned int)a0;
+ (id)sessionForUser:(unsigned int)a0;
+ (void)signalSessionReady;
+ (id)sessionByListener:(id)a0 withOptions:(id)a1;
+ (id)sessionWithOptions:(id)a0;

- (int)close;
- (id)properties;
- (id)initWithSessionID:(int)a0;
- (void)bringOnConsoleWithOptions:(id)a0;

@end
