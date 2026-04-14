@class IMHandle;

@interface IMItemChatContext : NSObject

@property (retain, nonatomic) IMHandle *senderHandle;
@property (retain, nonatomic) IMHandle *otherHandle;

- (void).cxx_destruct;
- (void)dealloc;

@end
