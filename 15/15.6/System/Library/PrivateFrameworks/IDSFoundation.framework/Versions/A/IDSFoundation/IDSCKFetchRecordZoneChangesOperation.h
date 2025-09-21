@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation

@property (nonatomic) char fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
