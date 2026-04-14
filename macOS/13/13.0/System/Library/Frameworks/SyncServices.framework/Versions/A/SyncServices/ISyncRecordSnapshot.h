@interface ISyncRecordSnapshot : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)recordStore;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2 session:(id)a3;
- (id)initWithTruthRecordStore:(id)a0 clientRecordIdMapper:(id)a1 entityNames:(id)a2;
- (void)freeOSResources;
- (id)recordsWithIdentifiers:(id)a0 useUnformattedValues:(BOOL)a1;
- (id)recordsWithIdentifiers:(id)a0;
- (id)targetIdentifiersForRelationshipName:(id)a0 withSourceIdentifier:(id)a1;
- (id)sourceIdentifiersForRelationshipName:(id)a0 withTargetIdentifier:(id)a1;
- (id)recordsWithMatchingAttributes:(id)a0;
- (id)recordsMatchingAllAttributes:(id)a0;
- (id)recordReferenceForRecordWithIdentifier:(id)a0;
- (id)recordIdentifierForReference:(id)a0 isModified:(BOOL *)a1;

@end
