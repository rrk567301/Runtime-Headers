@class NSArray, IMDChat;

@interface IMDMessageTranslator : NSObject

+ (BOOL)shouldTranslateMessagesForChat:(id)a0;
+ (void)translateMessageItems:(NSArray *)a0 forChat:(IMDChat *)a1 incoming:(BOOL)a2 completion:(void (^)(void))a3;

- (id)init;

@end
