@class NSURL, NSString, CPLEngineLibrary, NSArray, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;

@interface CPLEngineFeedbackManager : NSObject <CPLEngineComponent> {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportSendFeedbackTask> _sendTask;
    NSMutableArray *_messagesToSend;
    NSArray *_messagesSending;
    NSDate *_lastAttemptDate;
    NSURL *_feedbackMessagesURL;
    char _opened;
    char _closed;
    char _deactivated;
    NSString *_libraryIdentifier;
}

@property (nonatomic) char disableFeedback;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (id)componentName;
- (void)_load;
- (void)_save;
- (void)reportMiscInformation:(id)a0;
- (void)reportSetting:(id)a0 hasBeenSetToValue:(id)a1;
- (void)_appendMessage:(id)a0;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void)reportMessages:(id)a0;
- (void)sendFeedbackToServerIfNecessary;
- (void)_appendMessages:(id)a0;
- (void)_reallySendFeedbackToServer;
- (void)_sendFeedbackToServerIfNecessary;
- (void)closeAndDeactivate:(char)a0 completionHandler:(id /* block */)a1;
- (id)initWithEngineLibrary:(id)a0;
- (void)reportEndOfResetWithUUID:(id)a0 reason:(id)a1;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)a0;
- (void)reportMessage:(id)a0;
- (void)reportResetType:(id)a0 reason:(id)a1 uuid:(id)a2;
- (void)testKey:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
