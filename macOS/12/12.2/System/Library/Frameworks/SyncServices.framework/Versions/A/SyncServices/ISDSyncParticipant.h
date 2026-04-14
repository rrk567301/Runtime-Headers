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
- (void)setResponseDate:(id)a0;
- (id)responseDate;
- (id)syncStates;
- (BOOL)synchronizesAllEntities;
- (id)formatterBundle;
- (void)setTransientSyncMode:(int)a0 forEntityName:(id)a1;
- (int)syncModeForEntityName:(id)a0;
- (BOOL)getTransientSyncMode:(int *)a0 forEntityName:(id)a1;
- (int)syncPhase;
- (id)callbackTarget;
- (void)setCallbackTarget:(id)a0;
- (BOOL)isApprovedToPushTruthForEntityName:(id)a0;
- (void)removeTransientSyncModeForEntityName:(id)a0;
- (id)entityNamesHavingTruthPulled;
- (void)setSyncPhase:(int)a0;
- (id)fastClient;
- (id)fastEntityNames;
- (void)clearSyncStates;
- (void)setSyncMode:(int)a0 forEntityName:(id)a1;
- (void)setApprovedToPushTruth:(BOOL)a0 forEntityName:(id)a1;
- (BOOL)alerted;
- (void)setAlerted:(BOOL)a0;
- (BOOL)useLocalIdsForGUIDs;
- (id)newMappingFromEntityNameToFirstCompoundIdentityAlternativeWithPropertiesBeingSynced:(id)a0;

@end
