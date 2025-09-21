@interface CPDistributedMessagingDelayedReplyContext : NSObject

@property (nonatomic) unsigned int replyPort;
@property (nonatomic) char portPassing;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)a0 portPassing:(char)a1;

@end
