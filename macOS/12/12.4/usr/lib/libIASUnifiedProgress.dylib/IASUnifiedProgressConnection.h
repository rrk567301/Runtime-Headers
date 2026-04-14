@class NSMutableArray, NSXPCConnection;

@interface IASUnifiedProgressConnection : NSObject {
    NSXPCConnection *_connection;
    NSMutableArray *_callers;
}

+ (id)sharedConnection;

- (void)dealloc;
- (id)init;
- (BOOL)hasConnectionForCaller:(id)a0;
- (id)connectionForCaller:(id)a0;
- (void)releaseConnectionForCaller:(id)a0;
- (void)_fireReleaseTimer:(id)a0;
- (void)_startReleaseTimer;

@end
