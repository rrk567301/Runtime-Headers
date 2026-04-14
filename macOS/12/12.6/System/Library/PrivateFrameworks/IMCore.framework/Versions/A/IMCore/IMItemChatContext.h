@class IMHandle;

@interface IMItemChatContext : NSObject {
    IMHandle *_senderHandle;
    IMHandle *_otherHandle;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
