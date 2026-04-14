@class NSArray, CKDProtocolTranslator, NSData;
@protocol CKSerializeRecordModificationsOperationCallbacks;

@interface CKDSerializeRecordModificationsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain) CKDProtocolTranslator *translator;
@property (retain) NSData *serializedModifications;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKSerializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ serializeCompletionBlock;

- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)_serialize;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (BOOL)validateAgainstLiveContainer:(id)a0 error:(id *)a1;
- (void)_setupTranslator;
- (void)_preflightRecords;

@end
