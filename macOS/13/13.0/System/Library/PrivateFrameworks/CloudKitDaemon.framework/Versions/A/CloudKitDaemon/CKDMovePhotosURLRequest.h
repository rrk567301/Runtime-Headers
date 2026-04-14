@class NSArray, NSMutableDictionary;

@interface CKDMovePhotosURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *moveChanges;
@property (nonatomic) long long sourceDatabaseScope;
@property (nonatomic) BOOL atomic;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (copy, nonatomic) id /* block */ recordPostedBlock;

- (void).cxx_destruct;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)zoneIDsToLock;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)addSignatureForRequestOperation:(id)a0;
- (int)isolationLevel;
- (id)initWithOperation:(id)a0 moveChanges:(id)a1 sourceDatabaseScope:(long long)a2 atomic:(BOOL)a3;

@end
