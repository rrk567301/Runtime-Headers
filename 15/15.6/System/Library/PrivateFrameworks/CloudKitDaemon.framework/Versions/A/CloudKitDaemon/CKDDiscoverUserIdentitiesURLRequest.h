@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest

@property (readonly, nonatomic) NSArray *infosToDiscover;
@property (readonly, nonatomic) NSMutableDictionary *submittedInfos;
@property (readonly, nonatomic) char adopterProvidedLookupInfos;
@property (nonatomic) char wantsProtectionInfo;
@property (copy, nonatomic) id /* block */ progressBlock;

- (void).cxx_destruct;
- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1 adopterProvidedLookupInfos:(char)a2;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;

@end
