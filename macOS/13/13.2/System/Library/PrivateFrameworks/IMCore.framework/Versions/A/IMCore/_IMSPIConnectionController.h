@interface _IMSPIConnectionController : NSObject

+ (id)sharedController;

- (void)setChatCap;
- (void)setChatSendCap;
- (void)setChatSendCapWithAttachments;
- (void)clearChatCap;

@end
