@class IMMessage;

@interface IMMessageItemChatContext : IMItemChatContext

@property (retain, nonatomic) IMMessage *message;
@property (nonatomic) BOOL invitation;

- (void).cxx_destruct;
- (void)dealloc;

@end
