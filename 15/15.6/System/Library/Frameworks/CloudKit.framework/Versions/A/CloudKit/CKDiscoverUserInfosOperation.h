@class NSArray;

@interface CKDiscoverUserInfosOperation : CKOperation

@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *userRecordIDs;
@property (copy, nonatomic) id /* block */ discoverUserInfosCompletionBlock;

- (void).cxx_destruct;
- (char)CKOperationShouldRun:(id *)a0;
- (id)initWithEmailAddresses:(id)a0 userRecordIDs:(id)a1;

@end
