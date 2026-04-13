@class NSArray, ISDRecordIdMapper, ISyncSession, ISDRecordStore;

@interface ISyncConcreteRecordSnapshot : ISyncRecordSnapshot {
    ISDRecordStore *_truth;
    ISDRecordIdMapper *_mapper;
    NSArray *_entityNames;
    ISyncSession *_session;
}

- (void)dealloc;
- (id)recordStore;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2;
- (id)recordsWithIdentifiers:(id)a0;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2 session:(id)a3;
- (id)_recordIdMapper;
- (void)freeOSResources;
- (void)checkForCancelledSession;
- (id)_globalIdForLocalId:(id)a0;
- (id)_localIdForGlobalId:(id)a0;
- (id)recordsWithIdentifiers:(id)a0 useUnformattedValues:(BOOL)a1;
- (id)recordsWithMatchingAttributes:(id)a0 useUnformattedValues:(BOOL)a1 matchAll:(BOOL)a2;
- (id)recordsWithMatchingAttributes:(id)a0 useUnformattedValues:(BOOL)a1;
- (id)_swapMapper:(id)a0;
- (id)targetIdentifiersForRelationshipName:(id)a0 withSourceIdentifier:(id)a1;
- (id)sourceIdentifiersForRelationshipName:(id)a0 withTargetIdentifier:(id)a1;
- (id)recordsWithMatchingAttributes:(id)a0;

@end
