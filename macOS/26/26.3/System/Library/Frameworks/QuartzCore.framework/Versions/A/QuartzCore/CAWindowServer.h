@class NSArray;

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray *x0; id x1; unsigned int x2; id /* block */ x3; } *_impl;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) BOOL secure;
@property id /* block */ slotDeletionCallback;

+ (void)stopServer;
+ (id)context;
+ (id)server;
+ (id)contextWithOptions:(id)a0;
+ (id)serverIfRunning;
+ (id)serverWithOptions:(id)a0;

- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;
- (void)removeAllDisplays;
- (id)description;
- (id)init;
- (id)displayManager;
- (id)secureModeViolations;
- (id)_init;
- (id)displayWithDisplayId:(unsigned int)a0;
- (BOOL)isSlotValid:(unsigned int)a0;
- (id)displayWithName:(id)a0;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (void)dealloc;
- (void)addDisplay:(id)a0;
- (void)_detectDisplays;
- (id)displayWithUniqueId:(id)a0;
- (id)insecureProcessIds;
- (void)removeDisplay:(id)a0;

@end
