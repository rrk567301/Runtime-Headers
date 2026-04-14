@class IMMessage;

@interface IMMessageItemChatContext : IMItemChatContext {
    IMMessage *_message;
    BOOL _invitation;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
