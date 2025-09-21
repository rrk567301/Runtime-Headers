@class NSArray, FCCKPrivateDatabaseServerChangeToken;

@interface FCCKPrivateFetchDatabaseChangesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultChangedZoneIDs;
@property (retain, nonatomic) NSArray *resultDeletedZoneIDs;
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;
@property (nonatomic) char resultMoreComing;
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (char)validateOperation;

@end
