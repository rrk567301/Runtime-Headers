@class NSString, NSArray, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPDiscovery : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface> {
    char _activateCalled;
    NSMutableDictionary *_endpointMap;
    char _invalidateCalled;
    char _invalidateDone;
    NSObject<OS_dispatch_source> *_retryTimer;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) char targetUserSession;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned long long controlFlags;
@property (readonly, copy) NSArray *discoveredEndpoints;
@property (copy, nonatomic) id /* block */ foundHandler;
@property (copy, nonatomic) id /* block */ lostHandler;
@property (copy, nonatomic) id /* block */ changedHandler;
@property (retain, nonatomic) NSString *serviceType;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (char)_ensureXPCStarted;
- (void)_interrupted;
- (void)_lostAllEndpoints;
- (id)descriptionWithLevel:(int)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(char)a1;
- (void)_scheduleRetry;
- (void)xpcDiscoveryChangedEndpoint:(id)a0;
- (void)xpcDiscoveryFoundEndpoint:(id)a0;
- (void)xpcDiscoveryLostEndpoint:(id)a0;

@end
