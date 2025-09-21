@class NSString, NSArray, NSMutableDictionary, NSDictionary, RPCompanionLinkClient, NSObject, NSMutableSet, SFClient, NISession, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface SnapInSnapOutManager : NSObject <NISessionDelegate, NIInternalSessionDelegate>

@property (nonatomic) BOOL isStarted;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NISession *session;
@property (retain, nonatomic) SFDeviceDiscovery *sfDiscoverer;
@property (retain, nonatomic) RPCompanionLinkClient *rapportDiscoveryClient;
@property (retain, nonatomic) SFClient *sfClient;
@property (nonatomic) struct OpaqueFigSimpleMutex { } *mutex;
@property (retain, nonatomic) NSMutableDictionary *knownTargets;
@property (retain, nonatomic) NSMutableSet *currentTargetPSIs;
@property (retain, nonatomic) NSArray *acceptableTargets;
@property (retain, nonatomic) NSDictionary *targetPSILookup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void)session:(id)a0 didInvalidateWithError:(id)a1;
- (void)session:(id)a0 didUpdateNearbyObjects:(id)a1;
- (void)sessionDidStartRunning:(id)a0;
- (void)sessionWasSuspended:(id)a0;
- (id)getPSIForIDSDeviceIdentifier:(id)a0;
- (id)getTargetInfoForIDSDeviceIdentifier:(id)a0 creatingIfNecessary:(BOOL)a1;
- (void)handleRapportDevice:(id)a0 found:(BOOL)a1;
- (void)handleSnapInListChanged;
- (void)handleTargetWithIDSDeviceIdentifier:(id)a0 PSI:(id)a1 isVisibleToRapport:(BOOL)a2;
- (void)handleTargetWithIDSDeviceIdentifier:(id)a0 isInBubble:(BOOL)a1;
- (void)invalidateNISession;
- (void)invalidateRapportClient;
- (void)invalidateSFClient;
- (BOOL)isAcceptablePSI:(id)a0;
- (void)loadAcceptableTargets;
- (void)loadTargetPSILookup;
- (void)session:(id)a0 didDiscoverNearbyObject:(id)a1;
- (void)session:(id)a0 object:(id)a1 didUpdateRegion:(id)a2 previousRegion:(id)a3;
- (void)setupNISession;
- (void)setupRapportClient;
- (void)setupSFClient;
- (void)updateTargetState:(id)a0;

@end
