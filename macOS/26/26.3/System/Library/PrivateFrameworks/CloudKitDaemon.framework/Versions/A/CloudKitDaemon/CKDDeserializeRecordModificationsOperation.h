@class NSData, CKDProtocolTranslator, NSArray;
@protocol CKDeserializeRecordModificationsOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDDeserializeRecordModificationsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSData *serializedModifications;
@property (retain) CKDProtocolTranslator *translator;
@property (retain) NSArray *recordsToSave;
@property (retain) NSArray *recordIDsToDelete;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKDeserializeRecordModificationsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ deserializeCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)validateAgainstLiveContainer:(id)a0 error:(id *)a1;
- (void)main;
- (void).cxx_destruct;
- (void)_deserialize;
- (void)_postflightRecords;
- (void)_setupTranslator;

@end
