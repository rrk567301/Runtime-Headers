@interface SLShareableContentAppleEventHandler : NSObject

+ (id)sharedEventHandler;

- (void)handleAppleEvent:(id)a0 withReplyEvent:(id)a1;

@end
