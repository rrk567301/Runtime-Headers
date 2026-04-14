@class NSData, CKDProtocolTranslator, NSArray;
@protocol CKDeserializeRecordModificationsOperationCallbacks;

@interface CKDDeserializeRecordModificationsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSData *serializedModifications;
@property (retain) CKDProtocolTranslator *translator;
@property (retain) NSArray *recordsToSave;
@property (retain) NSArray *recordIDsToDelete;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKDeserializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ deserializeCompletionBlock;

- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)_deserialize;
- (void)_postflightRecords;
- (void)_setupTranslator;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)validateAgainstLiveContainer:(id)a0 error:(id *)a1;

@end
