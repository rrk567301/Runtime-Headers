@class GTTransportMessage_replayer, NSObject;
@protocol OS_dispatch_queue;

@interface GTBufferedSendOperation_replayer : NSObject

@property (retain, nonatomic) GTTransportMessage_replayer *message;
@property (retain, nonatomic) GTTransportMessage_replayer *replyTo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) id /* block */ replyBlock;

- (void)dealloc;

@end
