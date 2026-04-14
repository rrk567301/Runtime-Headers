@class NSMutableDictionary, NSXPCConnection;

@interface SOAActiveChatManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *chatGUIDToLastReadMessage;
@property (retain, nonatomic) NSMutableDictionary *chatGUIDToLastPostedMessage;
@property (weak, nonatomic) NSXPCConnection *delegateConnection;

+ (id)weakSharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)markChatGUIDAsRead:(id)a0;
- (void)setLastReadMessage:(id)a0 forChatGUID:(id)a1;
- (void)runBlock:(id /* block */)a0 forChatGUID:(id)a1;
- (void)setLastPostedMessage:(id)a0 forChatGUID:(id)a1;
- (BOOL)shouldPostNotificationForMessage:(id)a0 inChat:(id)a1;

@end
