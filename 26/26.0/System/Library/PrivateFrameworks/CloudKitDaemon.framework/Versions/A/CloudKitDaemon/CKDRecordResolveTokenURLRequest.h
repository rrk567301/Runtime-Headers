@class NSArray, NSMutableDictionary, CKDProtocolTranslator, NSSet;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *lookupInfos;
@property (retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID;
@property (retain, nonatomic) CKDProtocolTranslator *privateDBTranslator;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeySet;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) id /* block */ tokenResolveBlock;

- (id)applicationBundleIdentifierForContainerAccess;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)sourceApplicationSecondaryIdentifier;
- (long long)databaseScope;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)generateRequestOperations;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 shortTokenLookupInfos:(id)a1;
- (BOOL)sendRequestAnonymously;

@end
