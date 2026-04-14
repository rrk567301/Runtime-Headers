@class NSString, UISSlotMachine;

@interface SLDCollaborationFooterService : SLDRemoteRenderingService <SLDService, SLDFooterViewService>

@property (retain, nonatomic) UISSlotMachine *footerViewSlotMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)remoteObjectProtocol;
+ (void)slotForModel:(id)a0 maxWidth:(double)a1 completion:(id /* block */)a2;
+ (id)nameFromNameComponents:(id)a0;
+ (void)slotForModelNeedingNameAndEmail:(id)a0 maxWidth:(double)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (id)slotMachineForViewIdentifier:(id)a0;
- (void)footerViewForModel:(id)a0 style:(id)a1 maxWidth:(double)a2 layerContextID:(unsigned long long)a3 reply:(id /* block */)a4;

@end
