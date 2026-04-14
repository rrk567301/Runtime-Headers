@class NSArray, NSMutableDictionary;

@interface CKDMovePhotosURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *moveChanges;
@property (nonatomic) long long sourceDatabaseScope;
@property (nonatomic) BOOL atomic;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (copy, nonatomic) id /* block */ recordPostedBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)a0 moveChanges:(id)a1 sourceDatabaseScope:(long long)a2 atomic:(BOOL)a3;
- (int)isolationLevel;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;

@end
