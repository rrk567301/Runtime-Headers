@class NSArray;

@interface CAWindowServer : NSObject {
    struct CAWindowServerImpl { struct __CFArray *x0; unsigned int x1; id /* block */ x2; } *_impl;
}

@property (readonly) NSArray *displays;
@property (getter=isMirroringEnabled) char mirroringEnabled;
@property unsigned int rendererFlags;
@property (getter=isSecure) char secure;
@property id /* block */ slotDeletionCallback;

+ (id)context;
+ (id)contextWithOptions:(id)a0;
+ (id)server;
+ (id)serverWithOptions:(id)a0;
+ (id)serverIfRunning;
+ (void)stopServer;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)_init;
- (void)addDisplay:(id)a0;
- (id)displayManager;
- (void)removeDisplay:(id)a0;
- (void)_detectDisplays;
- (unsigned int)clientPortOfContextId:(unsigned int)a0;
- (unsigned int)contextIdHostingContextId:(unsigned int)a0;
- (id)displayWithDisplayId:(unsigned int)a0;
- (id)displayWithName:(id)a0;
- (id)displayWithUniqueId:(id)a0;
- (id)insecureProcessIds;
- (char)isSlotValid:(unsigned int)a0;
- (void)removeAllDisplays;
- (id)secureModeViolations;
- (unsigned int)taskNamePortOfContextId:(unsigned int)a0;

@end
