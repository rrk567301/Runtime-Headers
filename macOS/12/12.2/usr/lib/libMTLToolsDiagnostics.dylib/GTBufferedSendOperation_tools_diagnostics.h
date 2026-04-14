@class GTTransportMessage_tools_diagnostics;

@interface GTBufferedSendOperation_tools_diagnostics : NSObject

@property (retain, nonatomic) GTTransportMessage_tools_diagnostics *message;
@property (retain, nonatomic) GTTransportMessage_tools_diagnostics *replyTo;
@property (nonatomic) struct dispatch_queue_s { } *queue;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) id /* block */ replyBlock;

- (void)dealloc;

@end
