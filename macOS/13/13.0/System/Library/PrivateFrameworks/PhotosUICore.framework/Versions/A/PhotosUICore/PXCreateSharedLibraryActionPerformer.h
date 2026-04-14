@class PXSharedLibraryLegacyDevicesMonitor, NSString;

@interface PXCreateSharedLibraryActionPerformer : PXActionPerformer <PXAssistantControllerDelegate>

@property (retain, nonatomic) PXSharedLibraryLegacyDevicesMonitor *legacyDevicesMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)assistantController:(id)a0 completedWithError:(id)a1;
- (void)performActionWithLegacyDevicesMonitor:(id)a0 presentationEnvironment:(id)a1 completionHandler:(id /* block */)a2;

@end
