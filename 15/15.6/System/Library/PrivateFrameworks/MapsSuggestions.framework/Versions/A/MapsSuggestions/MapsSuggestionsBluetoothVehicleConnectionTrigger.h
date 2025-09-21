@class NSString, MapsSuggestionsDarwinNotificationTrigger;

@interface MapsSuggestionsBluetoothVehicleConnectionTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver> {
    char _onExit;
    char _onConnect;
    char _onDisconnect;
    MapsSuggestionsDarwinNotificationTrigger *_btDisconnectTrigger;
    MapsSuggestionsDarwinNotificationTrigger *_btExitTrigger;
    MapsSuggestionsDarwinNotificationTrigger *_btConnectTrigger;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initFireOnConnect:(char)a0 disconnect:(char)a1 exit:(char)a2;
- (void)triggerFired:(id)a0;

@end
