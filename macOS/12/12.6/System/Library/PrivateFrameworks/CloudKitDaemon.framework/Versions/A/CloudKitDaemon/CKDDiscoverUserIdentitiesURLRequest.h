@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *infosToDiscover;
@property (retain, nonatomic) NSMutableDictionary *submittedInfos;
@property (nonatomic) BOOL wantsProtectionInfo;
@property (copy, nonatomic) id /* block */ progressBlock;

- (void).cxx_destruct;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1;

@end
