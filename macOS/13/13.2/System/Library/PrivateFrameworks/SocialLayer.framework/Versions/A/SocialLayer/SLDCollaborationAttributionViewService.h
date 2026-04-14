@class NSString, UISSlotMachine;

@interface SLDCollaborationAttributionViewService : SLDRemoteRenderingService <SLDService, SLDCollaborationAttributionViewService>

@property (retain, nonatomic) UISSlotMachine *slotMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (id)remoteObjectProtocol;

- (void).cxx_destruct;
- (id)_applicationIdentifierForConnection:(id)a0;
- (id)slotMachineForViewIdentifier:(id)a0;
- (void)collaborationAttributionViewForTitle:(id)a0 attributionIdentifiers:(id)a1 style:(id)a2 maxWidth:(double)a3 variant:(long long)a4 layerContextID:(unsigned long long)a5 reply:(id /* block */)a6;
- (id)_attributionsFromIDs:(id)a0 appID:(id)a1;

@end
