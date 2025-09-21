@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RTTServer : HCServer {
    NSLock *_dataResponseBlocksLock;
    NSMutableDictionary *_databaseResponseBlocks;
    NSObject<OS_dispatch_queue> *_commonRequestQueue;
    NSObject<OS_dispatch_queue> *_messageProcessingQueue;
}

@property (copy, nonatomic) id /* block */ actionCompletionBlock;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetConnection;
- (char)contactIsTTYContact:(id)a0;
- (void)handleMessageError:(id)a0 destructive:(char)a1;
- (void)_managerAXPIDState:(char)a0;
- (void)_registerForServerSettingsUpdates;
- (void)_takeStackshot;
- (void)cancelCallPromptDisplay;
- (char)deleteConversationWithCallUID:(id)a0;
- (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
- (void)findConversationForCallUID:(id)a0 andResult:(id /* block */)a1;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (char)isEmergencyNumber:(id)a0;
- (void)primeRTTServer;
- (void)registerForRemoteUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)registerForServiceUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)registerForUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (void)sendConversationUpdate:(id)a0;
- (void)sendMessageWithPayload:(id)a0 andIdentifier:(unsigned long long)a1;
- (void)sendString:(id)a0 forCallUID:(id)a1;
- (void)sendTranscription:(id)a0 forCallUUID:(id)a1 isNew:(char)a2;
- (void)setShouldSuppressIncomingNotification:(char)a0;
- (void)setSystemOutputAudioMuted:(char)a0 withCallID:(id)a1;
- (void)setTTYDictionaryAvailability:(char)a0;
- (void)setViewControllerIsVisible:(char)a0 withCallID:(id)a1;
- (void)shouldRestartOnInterruption:(id /* block */)a0;
- (void)terminateConnectionAndNotify:(char)a0;
- (id)valueForTTYSetting:(id)a0;

@end
