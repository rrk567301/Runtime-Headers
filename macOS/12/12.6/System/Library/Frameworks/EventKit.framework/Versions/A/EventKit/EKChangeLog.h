@class NSMutableDictionary;

@interface EKChangeLog : NSObject <NSCopying>

@property (retain) NSMutableDictionary *changeHistory;
@property (retain) NSMutableDictionary *relationChangeHistory;
@property (retain) NSMutableDictionary *seriesOffsets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)summary;
- (BOOL)changesExistForObjectWithIdentifier:(id)a0;
- (void)applyChangesToObject:(id)a0 withIdentifier:(id)a1;
- (void)logChangesForObject:(id)a0 withIdentifier:(id)a1 appliesToSeries:(BOOL)a2;
- (void)resetIdentifiers:(id)a0;
- (void)_logRelationshipChangesForObject:(id)a0 withIdentifier:(id)a1;
- (void)_logSeriesOffsetsForSeries:(id)a0 withIdentifier:(id)a1;
- (void)_logChangesForSingleValueRelationKey:(id)a0 parentObject:(id)a1 parentObjectIdentifier:(id)a2;
- (void)_logChangesForMultiValueRelationKey:(id)a0 parentObject:(id)a1 parentObjectIdentifier:(id)a2;
- (void)_applyChangesToObjectHelper:(id)a0 withIdentifier:(id)a1 addNotApply:(BOOL)a2 nonRecurringOnly:(BOOL)a3 applyOffsets:(BOOL)a4;
- (id)_nonRecurringChangesToApplyToObject:(id)a0 withIdentifier:(id)a1 changeHistory:(id)a2;
- (void)_applyChangeSet:(id)a0 toObject:(id)a1 byAdding:(BOOL)a2;
- (void)_applyOffsetsToEvent:(id)a0 withIdentifier:(id)a1;
- (void)_applyRelationshipChangesToObject:(id)a0 withIdentifier:(id)a1 addNotApply:(BOOL)a2;
- (void)_applyRelationshipChangesForSingleValueRelationKey:(id)a0 toObject:(id)a1 withIdentifier:(id)a2 addNotApply:(BOOL)a3;
- (void)_applyRelationshipChangesForMultiValueRelationKey:(id)a0 toObject:(id)a1 withIdentifier:(id)a2 addNotApply:(BOOL)a3;
- (id)offsetForEvent:(id)a0;
- (void)applyNonRecurrenceChangesToObject:(id)a0 withIdentifier:(id)a1;
- (void)intelligentlyApplyRecurrenceChangesToObject:(id)a0 withIdentifier:(id)a1;
- (void)addChangesToObject:(id)a0 withIdentifier:(id)a1;

@end
