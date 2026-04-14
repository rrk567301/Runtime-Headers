@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TSMSGService : NSObject {
    NSMutableDictionary *_activeExtSyncSessionsByTriggerId;
    NSMutableDictionary *_activeClockSessionsBySyncId;
    NSObject<OS_dispatch_queue> *_msgDispatchQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _extSyncSessionsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clockSessionsLock;
}

+ (id)sharedMSGService;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)addMSGClock:(unsigned int)a0 withNominalSyncDuration:(struct { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (unsigned long long)addMSGClockRef:(unsigned int)a0 error:(id *)a1;
- (void)daemonClientRefresh;
- (void)dispatchMSGNotification:(unsigned short)a0 args:(const unsigned long long *)a1 numArgs:(unsigned int)a2;
- (unsigned long long)getMSGClock:(unsigned int)a0 error:(id *)a1;
- (BOOL)removeMSGClock:(unsigned int)a0 error:(id *)a1;
- (BOOL)startExternalSync:(const struct { struct { unsigned int x0; unsigned int x1; struct { unsigned long long x0; unsigned long long x1; } x2; struct { unsigned long long x0; unsigned long long x1; } x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; char *x7; } x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a0 error:(id *)a1;
- (BOOL)stopExternalSync:(unsigned int)a0 error:(id *)a1;

@end
