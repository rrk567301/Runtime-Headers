@class NSArray, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPPeopleDiscovery : NSObject <NSSecureCoding, RPPeopleXPCClientInterface> {
    char _activateCalled;
    NSMutableDictionary *_discoveredPeople;
    char _invalidateCalled;
    char _invalidateDone;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) char targetUserSession;
@property (nonatomic) unsigned int changeFlags;
@property (nonatomic) unsigned int discoveryFlags;
@property (nonatomic) int discoveryMode;
@property (readonly, copy, nonatomic) NSArray *discoveredPeople;
@property (readonly, nonatomic) int peopleDensity;
@property (copy, nonatomic) id /* block */ peopleDensityChangedHandler;
@property (copy, nonatomic) id /* block */ personFoundHandler;
@property (copy, nonatomic) id /* block */ personLostHandler;
@property (copy, nonatomic) id /* block */ personChangedHandler;
@property (nonatomic) unsigned int scanRate;
@property (copy, nonatomic) id /* block */ statusChangedHandler;
@property (readonly, nonatomic) unsigned int statusFlags;

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
- (id)descriptionWithLevel:(int)a0;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (void)xpcPersonFound:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(char)a1;
- (void)_lostAllPeople;
- (void)_scheduleRetry;
- (void)_updatePeopleDensity:(unsigned long long)a0;
- (void)addAppleID:(id)a0 completion:(id /* block */)a1;
- (void)removeAppleID:(id)a0 completion:(id /* block */)a1;
- (void)xpcPeopleStatusChanged:(unsigned int)a0;
- (void)xpcPersonChanged:(id)a0 changes:(unsigned int)a1;
- (void)xpcPersonLost:(id)a0;

@end
