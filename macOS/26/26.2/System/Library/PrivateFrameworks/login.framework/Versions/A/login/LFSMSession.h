@interface LFSMSession : NSObject

@property int sessionID;

+ (id)currentSession;
+ (id)defaultOptions;
+ (id)allSessions;
+ (id)sessionForUser:(unsigned int)a0;
+ (BOOL)isThisSessionOnConsole;
+ (id)sessionByListener:(id)a0 withOptions:(id)a1;
+ (id)sessionWithCGSessionID:(unsigned int)a0;
+ (id)sessionWithOptions:(id)a0;
+ (id)sessionWithSessionID:(int)a0;
+ (void)signalSessionReady;

- (int)close;
- (id)properties;
- (id)initWithSessionID:(int)a0;
- (void)bringOnConsoleWithOptions:(id)a0;

@end
