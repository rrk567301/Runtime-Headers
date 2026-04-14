@class NSDictionary;

@interface HMDCharacteristicUpdatesNotificationPayload : NSObject

@property (readonly, copy, nonatomic) NSDictionary *spiEntitledClientUpdates;
@property (readonly, copy, nonatomic) NSDictionary *characteristicUpdatesForEntitledClients;
@property (readonly, nonatomic) BOOL hasEntitledClientOnlyChanges;
@property (readonly, copy, nonatomic) NSDictionary *characteristicUpdatesForAllClients;

- (void).cxx_destruct;
- (id)initWithSPIEntitledClientUpdates:(id)a0 allClientUpdates:(id)a1;
- (id)mergeCharacteristicChangesPayload:(id)a0 otherCharacteristicChangesPayload:(id)a1;

@end
