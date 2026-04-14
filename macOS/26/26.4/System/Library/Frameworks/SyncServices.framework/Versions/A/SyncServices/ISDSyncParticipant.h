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

- (id)clientId;
- (id)entityNames;
- (id)initWithClient:(id)a0;
- (id)responseDate;
- (void)setEntityNames:(id)a0;
- (id)client;
- (void)setResponseDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)alerted;
- (void)setAlerted:(BOOL)a0;
- (void)setClientState:(id)a0;
- (id)clientState;
- (void)clearSyncStates;
- (id)fastEntityNames;
- (id)formatterBundle;
- (id)callbackTarget;
- (id)entityNamesHavingTruthPulled;
- (id)fastClient;
- (BOOL)getTransientSyncMode:(int *)a0 forEntityName:(id)a1;
- (BOOL)isApprovedToPushTruthForEntityName:(id)a0;
- (id)newMappingFromEntityNameToFirstCompoundIdentityAlternativeWithPropertiesBeingSynced:(id)a0;
- (void)removeTransientSyncModeForEntityName:(id)a0;
- (void)setApprovedToPushTruth:(BOOL)a0 forEntityName:(id)a1;
- (void)setCallbackTarget:(id)a0;
- (void)setSyncMode:(int)a0 forEntityName:(id)a1;
- (void)setSyncPhase:(int)a0;
- (void)setTransientSyncMode:(int)a0 forEntityName:(id)a1;
- (int)syncModeForEntityName:(id)a0;
- (int)syncPhase;
- (id)syncStates;
- (BOOL)synchronizesAllEntities;
- (BOOL)useLocalIdsForGUIDs;

@end
