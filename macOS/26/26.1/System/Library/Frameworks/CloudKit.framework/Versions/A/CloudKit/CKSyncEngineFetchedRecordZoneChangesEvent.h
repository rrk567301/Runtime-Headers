@class NSArray;

@interface CKSyncEngineFetchedRecordZoneChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *zoneAttributesModifications;
@property (readonly, copy, nonatomic) NSArray *modifications;
@property (readonly, copy, nonatomic) NSArray *deletions;

- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithModifications:(id)a0 deletions:(id)a1 zoneAttributesModifications:(id)a2;

@end
