@class NSArray;

@interface TSMMessageRecentUsageResponse : NSObject <TSMMessageProtocol>

@property (readonly, nonatomic) NSArray *sortedRecentlyUsedInputSourceUniqueIdentifiers;

- (void).cxx_destruct;
- (id)init;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;

@end
