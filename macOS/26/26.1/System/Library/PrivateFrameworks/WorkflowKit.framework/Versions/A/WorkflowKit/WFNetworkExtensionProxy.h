@class WFRemoteWidgetConnection, INIntent;

@interface WFNetworkExtensionProxy : NSObject <INCExtensionProxy>

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) WFRemoteWidgetConnection *remoteWidgetConnection;

- (void)getOptionsForParameterNamed:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)confirmIntentWithCompletionHandler:(id /* block */)a0;
- (void)resolveIntentSlotKeyPath:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getDefaultValueForParameterNamed:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleIntentWithCompletionHandler:(id /* block */)a0;
- (void)resolveIntentSlotKeyPaths:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIntent:(id)a0 remoteWidgetConnection:(id)a1;

@end
