@interface TUReplyWithMessageStore : NSObject

- (void)dealloc;
- (id)init;
- (int)count;
- (id)_cannedRepliesForSending:(char)a0;
- (id)_defaultRepliesForSending:(char)a0;
- (void)_handleMessagesStoreChanged;
- (id)cannedReplies;
- (id)cannedRepliesForSending;
- (id)cannedReplyActionSheetOptions;
- (id)customReplies;
- (id)defaultReplies;
- (void)setCustomReply:(id)a0 atIndex:(unsigned long long)a1;

@end
