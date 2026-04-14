@class NSArray, CKDProtocolTranslator, NSData;
@protocol CKSerializeRecordModificationsOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDSerializeRecordModificationsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain) CKDProtocolTranslator *translator;
@property (retain) NSData *serializedModifications;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKSerializeRecordModificationsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ serializeCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (BOOL)makeStateTransition;
- (void).cxx_destruct;
- (BOOL)validateAgainstLiveContainer:(id)a0 error:(id *)a1;
- (void)_serialize;
- (void)_preflightRecords;
- (void)_setupTranslator;

@end
