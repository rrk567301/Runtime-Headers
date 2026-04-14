@class COCoordinationService;

@interface _COCoordinationServiceStateTrackingAddOn : COMeshAddOn

@property (weak, nonatomic) COCoordinationService *service;

- (void).cxx_destruct;
- (void)didStopMeshController:(id)a0;

@end
