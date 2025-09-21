@interface MFMutedMessagesHandler : NSObject

+ (char)archiveOrDeleteMutedMessages;
+ (void)handleMessages:(id)a0 changeManager:(id)a1;
+ (void)handleMessages:(id)a0 store:(id)a1;
+ (void)handleMutedMessages:(id)a0 store:(id)a1;
+ (void)setArchiveOrDeleteMutedMessages:(char)a0;

@end
