@class NSArray, NSURL, SFAuthorization;
@protocol LROperationDelegate;

@interface _LRConcreteOperation : LROperation {
    NSURL *_url;
    int _flags;
    SFAuthorization *_auth;
    id<LROperationDelegate> _delegate;
}

@property struct _xpc_connection_s { } *connection;
@property struct dispatch_queue_s { } *queue;
@property unsigned long long generation;
@property (retain) NSArray *pathsNeedingRepair;
@property unsigned long long pathsNeedingRepairCount;

- (int)flags;
- (void)cancel;
- (void)setUrl:(id)a0;
- (id)delegate;
- (void)setFlags:(int)a0;
- (void)setDelegate:(id)a0;
- (void)invalidate;
- (void)dealloc;
- (id)url;
- (id)init;
- (id)auth;
- (void)setAuth:(id)a0;
- (void)_handleEvent:(void *)a0 generation:(unsigned long long)a1;
- (void)beginRepair;

@end
