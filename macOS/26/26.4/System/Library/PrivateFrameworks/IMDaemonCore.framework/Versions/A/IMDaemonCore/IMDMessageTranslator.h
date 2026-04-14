@class NSArray, IMDChat;

@interface IMDMessageTranslator : NSObject

+ (BOOL)shouldTranslateMessagesForChat:(id)a0;
+ (void)handleIncomingRelayWithCommand:(id)a0 serviceName:(id)a1;
+ (BOOL)shouldTranslateMessageItems:(id)a0;
+ (void)translateMessageItems:(NSArray *)a0 forChat:(IMDChat *)a1 incoming:(BOOL)a2 completion:(void (^)(void))a3;

- (void).cxx_destruct;
- (id)init;

@end
