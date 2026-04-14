@class NSString;
@protocol HMDPrimaryResidentElectionAddOnDelegate;

@interface HMDPrimaryElectionCoordinationAddOn : NSObject <HMDPrimaryResidentElectionAddOn>

@property (weak) id<HMDPrimaryResidentElectionAddOnDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dumpState;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (void)registerForMessages;
- (void).cxx_destruct;
- (void)performElection;
- (BOOL)residentIsPartOfTheCurrentMesh:(id)a0;
- (id)residentsInMesh;
- (BOOL)allowExternalUpdateOfPrimaryResidentTo:(id)a0;
- (void)didAddCurrentDevice;
- (void)performElectionWithReason:(unsigned long long)a0;
- (void)primaryResidentChanged:(id)a0 previousResidentDevice:(id)a1;
- (void)selectPrimaryResidentWithReason:(unsigned long long)a0;

@end
