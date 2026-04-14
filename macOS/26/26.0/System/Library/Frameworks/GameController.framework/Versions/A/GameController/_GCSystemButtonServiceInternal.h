@class _GCSystemButtonServerConnection, NSString, NSSet, NSMutableArray;

@interface _GCSystemButtonServiceInternal : NSObject <_GCSystemButtonClientInterface> {
    NSMutableArray *_consumers;
    _GCSystemButtonServerConnection *_serverConnection;
    id _serverConnectionInvalidation;
    id _serverConnectionInterruption;
}

@property (readonly, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolName;
@property (readonly, copy) NSSet *respondingProcessBundleIdentifiers;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)beginConsumingPressesWithReason:(id)a0 consumer:(id)a1 priority:(long long)a2;
- (oneway void)consumeSystemButtonPressEventAtPriority:(long long)a0;
- (oneway void)setActiveClientsRespondingToSystemButton:(id)a0;
- (oneway void)setSystemButtonAvailable:(BOOL)a0 localizedName:(id)a1 sfSymbolName:(id)a2;

@end
