@class NSArray, NSMutableDictionary;

@interface CKDMovePhotosURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *moveChanges;
@property (nonatomic) long long sourceDatabaseScope;
@property (nonatomic) BOOL atomic;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary *recordByRequestID;
@property (copy, nonatomic) id /* block */ recordPostedBlock;

- (void)fillOutRequestProperties:(id)a0;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)generateRequestOperations;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)recordIDsUsedInZones:(id)a0;
- (void).cxx_destruct;
- (int)isolationLevel;
- (id)initWithOperation:(id)a0 moveChanges:(id)a1 sourceDatabaseScope:(long long)a2 atomic:(BOOL)a3;

@end
