@class NSString;

@interface _HKObjectTypeAnchorQuery : HKQuery <_HKObjectTypeAnchorQueryClientInterface> {
    id /* block */ _updateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureClientInterface:(id)a0;
+ (id)clientInterfaceProtocol;

- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_populateConfiguration:(id)a0;
- (void)queue_deliverError:(id)a0;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)client_deliverAnchor:(id)a0 query:(id)a1;

@end
