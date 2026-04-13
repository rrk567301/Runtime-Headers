@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TTYServer : AXHeardServer {
    NSLock *_dataResponseBlocksLock;
    NSMutableDictionary *_databaseResponseBlocks;
    NSObject<OS_dispatch_queue> *_commonRequestQueue;
}

@property (copy, nonatomic) id /* block */ actionCompletionBlock;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resetConnection;
- (BOOL)contactIsTTYContact:(id)a0;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (void)setTTYDictionaryAvailability:(BOOL)a0;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (void)_managerAXPIDState:(BOOL)a0;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)handleMessageError:(id)a0 destructive:(BOOL)a1;
- (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelCallPromptDisplay;
- (void)setShouldSuppressIncomingNotification:(BOOL)a0;
- (void)findConversationForCallUID:(id)a0 andResult:(id /* block */)a1;
- (void)registerForUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (id)valueForTTYSetting:(id)a0;
- (void)sendCharacter:(unsigned short)a0 forCallUID:(id)a1;

@end
