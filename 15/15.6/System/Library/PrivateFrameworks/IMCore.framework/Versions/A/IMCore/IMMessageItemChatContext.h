@class IMMessage;

@interface IMMessageItemChatContext : IMItemChatContext

@property (retain, nonatomic) IMMessage *message;
@property (nonatomic) char invitation;

- (void)dealloc;
- (void).cxx_destruct;

@end
