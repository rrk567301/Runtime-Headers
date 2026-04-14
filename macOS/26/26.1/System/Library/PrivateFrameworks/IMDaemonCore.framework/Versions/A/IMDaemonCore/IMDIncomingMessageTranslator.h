@class IMDChat, NSObject;
@protocol OS_dispatch_group;

@interface IMDIncomingMessageTranslator : NSObject

@property (readonly, nonatomic) IMDChat *chat;
@property (readonly, nonatomic) BOOL translating;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;

- (void).cxx_destruct;
- (id)initWithChat:(id)a0;
- (void)beginProcessingMessage:(id)a0;
- (id)checkForSentTranslationForMessage:(id)a0;
- (void)finishProcessingMessage:(id)a0 completion:(id /* block */)a1;
- (void)processedAllMessagesWithCompletion:(id /* block */)a0;

@end
