@class NSString, NSArray, PXNoContentGadget;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMGadgetDataSourceManager : PXGadgetDataSourceManager <PXSettingsKeyObserver> {
    NSArray *_gadgetProviders;
    id<PXCMMWorkflowPresenting> _workflowPresenter;
    PXNoContentGadget *_noContentGadget;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_keyPathsAffectingGadgetProviderAvailability;

- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)removeCachedProviders;
- (id)initWithWorkflowPresenter:(id)a0;
- (id)gadgetProviders;
- (id)noContentGadget;

@end
