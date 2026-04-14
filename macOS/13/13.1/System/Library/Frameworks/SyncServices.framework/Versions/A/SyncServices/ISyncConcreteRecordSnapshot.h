@class NSArray, ISDRecordIdMapper, ISyncSession, ISDRecordStore;

@interface ISyncConcreteRecordSnapshot : ISyncRecordSnapshot {
    ISDRecordStore *_truth;
    ISDRecordIdMapper *_mapper;
    NSArray *_entityNames;
    ISyncSession *_session;
}

- (void)dealloc;
- (id)recordStore;
- (id)_recordIdMapper;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2 session:(id)a3;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2;
- (void)freeOSResources;
- (void)checkForCancelledSession;
- (id)_localIdForGlobalId:(id)a0;
- (id)_globalIdForLocalId:(id)a0;
- (id)_swapMapper:(id)a0;
- (id)recordsWithIdentifiers:(id)a0 useUnformattedValues:(BOOL)a1;
- (id)recordsWithIdentifiers:(id)a0;
- (id)targetIdentifiersForRelationshipName:(id)a0 withSourceIdentifier:(id)a1;
- (id)sourceIdentifiersForRelationshipName:(id)a0 withTargetIdentifier:(id)a1;
- (id)recordsWithMatchingAttributes:(id)a0 useUnformattedValues:(BOOL)a1 matchAll:(BOOL)a2;
- (id)recordsWithMatchingAttributes:(id)a0 useUnformattedValues:(BOOL)a1;
- (id)recordsWithMatchingAttributes:(id)a0;

@end
