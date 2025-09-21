@class WFRemoteWidgetConnection, INIntent;

@interface WFNetworkExtensionProxy : NSObject <INCExtensionProxy>

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) WFRemoteWidgetConnection *remoteWidgetConnection;

- (void)resolveIntentSlotKeyPaths:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleIntentWithCompletionHandler:(id /* block */)a0;
- (void)getOptionsForParameterNamed:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDefaultValueForParameterNamed:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveIntentSlotKeyPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)confirmIntentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 remoteWidgetConnection:(id)a1;

@end
