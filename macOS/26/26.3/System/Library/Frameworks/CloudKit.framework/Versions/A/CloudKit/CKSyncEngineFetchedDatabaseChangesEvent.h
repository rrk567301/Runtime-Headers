@class NSArray;

@interface CKSyncEngineFetchedDatabaseChangesEvent : CKSyncEngineEvent

@property (readonly, copy, nonatomic) NSArray *modifications;
@property (readonly, copy, nonatomic) NSArray *deletions;

- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithModifications:(id)a0 deletions:(id)a1;

@end
