@class HMMTRControllerParameters, NSSet, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRCommissioningSessionHandler : HMFObject <MTRDeviceControllerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSNumber *nodeID;
@property (retain) NSSet *allPairedNodeIDs;
@property (retain) HMMTRControllerParameters *controllerParametersToRemove;
@property (copy) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithClientQueue:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)controller:(id)a0 commissioningSessionEstablishmentDone:(id)a1;
- (void)establishSessionToRemoveFabricWithDeviceController:(id)a0 forControllerParameters:(id)a1 setupPayload:(id)a2 nodeID:(id)a3 allPairedNodeIDs:(id)a4 completion:(id /* block */)a5;
- (void)readFabricsFromDeviceBeingCommissionedWithController:(id)a0 completion:(id /* block */)a1;
- (void)removeFabricFromDeviceBeingCommissionedWithController:(id)a0 fabricIndex:(id)a1 completion:(id /* block */)a2;
- (BOOL)setUpCommissioningSessionWithDeviceController:(id)a0 payload:(id)a1 newNodeID:(id)a2 error:(id *)a3;

@end
