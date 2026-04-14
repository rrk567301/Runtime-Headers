@class NSDate, NSString, NSArray, NSMutableDictionary, ISDClient, NSMutableSet, NSMutableArray, NSNumber, ISDFileReference;
@protocol ISyncSessionCallback;

@interface ISDSyncParticipant : NSObject {
    ISDClient *_client;
    NSString *_clientId;
    NSArray *_entityNames;
    NSMutableDictionary *_transientSyncModes;
    NSMutableArray *_entityNamesHavingTruthPulled;
    NSMutableSet *_pushTruthApprovalTable;
    NSArray *_clientSyncStates;
    id<ISyncSessionCallback> _callbackTarget;
    id _clientState;
    int _phase;
    BOOL _alerted;
    NSDate *_responseDate;
    ISDFileReference *_formatterBundle;
    NSNumber *_useLocalIdsForGuids;
    BOOL _synchronizesAllEntities;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)client;
- (id)initWithClient:(id)a0;
- (id)clientId;
- (id)entityNames;
- (void)setEntityNames:(id)a0;
- (id)clientState;
- (void)setClientState:(id)a0;
- (BOOL)alerted;
- (void)setAlerted:(BOOL)a0;
- (id)responseDate;
- (void)setResponseDate:(id)a0;
- (int)syncPhase;
- (id)fastClient;
- (void)setSyncPhase:(int)a0;
- (id)fastEntityNames;
- (id)syncStates;
- (void)clearSyncStates;
- (int)syncModeForEntityName:(id)a0;
- (void)setSyncMode:(int)a0 forEntityName:(id)a1;
- (BOOL)getTransientSyncMode:(int *)a0 forEntityName:(id)a1;
- (void)setTransientSyncMode:(int)a0 forEntityName:(id)a1;
- (id)entityNamesHavingTruthPulled;
- (void)removeTransientSyncModeForEntityName:(id)a0;
- (void)setApprovedToPushTruth:(BOOL)a0 forEntityName:(id)a1;
- (BOOL)isApprovedToPushTruthForEntityName:(id)a0;
- (id)callbackTarget;
- (void)setCallbackTarget:(id)a0;
- (id)formatterBundle;
- (BOOL)useLocalIdsForGUIDs;
- (BOOL)synchronizesAllEntities;
- (id)newMappingFromEntityNameToFirstCompoundIdentityAlternativeWithPropertiesBeingSynced:(id)a0;

@end
