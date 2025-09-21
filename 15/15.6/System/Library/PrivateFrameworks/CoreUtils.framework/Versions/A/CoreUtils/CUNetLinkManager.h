@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUNetLinkManager : NSObject {
    NSMutableSet *_endpoints;
    unsigned int _endpointChanges;
    char _hasIPv4Endpoint;
    char _hasIPv6Endpoint;
    char _invalidateCalled;
    char _invalidateDone;
    NSObject<OS_dispatch_source> *_pollTimer;
    int _probeSocketV4;
    NSObject<OS_dispatch_source> *_probeSourceV4;
    int _probeSocketV6;
    NSObject<OS_dispatch_source> *_probeSourceV6;
    unsigned int _reReachableCount;
    unsigned int _rxCount;
    unsigned int _txCount;
    unsigned int _txErrors;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    unsigned int _unreachableCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_update;
- (void)_invalidate;
- (void)_invalidated;
- (void)removeEndpoint:(id)a0;
- (void)_monitorEnsureStarted;
- (void)_monitorEnsureStopped;
- (void)_monitorReadPacket:(int)a0;
- (void)_monitorSendPacketToEndpoint:(id)a0;
- (void)_monitorSetupSocket:(int)a0;
- (void)_updateARP;
- (void)_updateEndpoint:(id)a0 state:(int)a1;
- (void)_updateEndpoints;
- (void)_updateNDP;
- (void)addEndpoint:(id)a0;
- (id)descriptionWithLevel:(int)a0;

@end
