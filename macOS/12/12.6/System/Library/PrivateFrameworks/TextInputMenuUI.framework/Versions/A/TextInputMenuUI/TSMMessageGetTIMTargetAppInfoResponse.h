@class InputSourceOwner;

@interface TSMMessageGetTIMTargetAppInfoResponse : NSObject <TSMMessageProtocol>

@property (readonly, nonatomic) InputSourceOwner *inputSourceOwner;

- (void)dealloc;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;

@end
