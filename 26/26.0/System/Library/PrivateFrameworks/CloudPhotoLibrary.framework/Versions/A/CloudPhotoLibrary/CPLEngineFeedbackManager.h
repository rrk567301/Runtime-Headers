@class NSURL, NSString, CPLEngineLibrary, NSArray, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;

@interface CPLEngineFeedbackManager : NSObject <CPLEngineComponent> {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportSendFeedbackTask> _sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    BOOL _opened;
    BOOL _closed;
    BOOL _deactivated;
    NSString *_libraryIdentifier;
}

@property (nonatomic) BOOL disableFeedback;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentName;
- (void)_load;
- (void)_save;
- (void)testKey:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)reportMiscInformation:(id)a0;
- (void)reportSetting:(id)a0 hasBeenSetToValue:(id)a1;
- (id)initWithEngineLibrary:(id)a0;
- (void)reportMessage:(id)a0;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void)sendFeedbackToServerIfNecessary;
- (void)closeAndDeactivate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_sendFeedbackToServerIfNecessary;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)a0;
- (void)reportMessages:(id)a0;
- (void)_appendMessage:(id)a0;
- (void)_appendMessages:(id)a0;
- (void)_reallySendFeedbackToServer;
- (void)reportEndOfResetWithUUID:(id)a0 reason:(id)a1;
- (void)reportResetType:(id)a0 reason:(id)a1 uuid:(id)a2;
- (void).cxx_destruct;

@end
