@class NSString, MSObjectQueue, MSMediaStreamDaemon, NSMutableArray, MSDeleteStreamsProtocol;
@protocol MSDeleterDelegate;

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate> {
    MSDeleteStreamsProtocol *_protocol;
    int _state;
    MSObjectQueue *_deleteQueue;
    NSMutableArray *_requestedDeleteWrappers;
    int _maxErrorCount;
}

@property (nonatomic) MSMediaStreamDaemon *daemon;
@property (nonatomic) int batchSize;
@property (nonatomic) id<MSDeleterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInRetryState;
+ (id)_clearInstantiatedDeletersByPersonID;
+ (void)_setMasterNextActivityDate:(id)a0 forPersonID:(id)a1;
+ (id)existingDeleterForPersonID:(id)a0;
+ (id)nextActivityDate;
+ (void)stopAllActivities;
+ (id)nextActivityDateForPersonID:(id)a0;
+ (void)abortAllActivities;
+ (void)forgetPersonID:(id)a0;
+ (id)deleterForPersonID:(id)a0;
+ (id)personIDsWithOutstandingActivities;

- (void)abort;
- (void)_stop;
- (void)dealloc;
- (void)stop;
- (void)deactivate;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;
- (void)deleteAssetCollections:(id)a0;
- (void)_forget;
- (BOOL)_isInRetryState;
- (void)_abort;
- (id)_abortedError;
- (BOOL)_isAllowedToDelete;
- (void)_sendDeleteRequest;
- (void)_updateMasterManifest;
- (void)deleteProtocol:(id)a0 didFinishSuccessfulCollections:(id)a1 failedCollections:(id)a2 error:(id)a3;
- (void)deleteProtocol:(id)a0 didReceiveAuthenticationError:(id)a1;
- (void)performOutstandingActivities;

@end
