@class NSThread;

@interface _BaseClientPortListener : NSObject

@property struct __CFRunLoop { } *runLoop;
@property (retain, nonatomic) NSThread *thread;
@property (nonatomic) struct __CFRunLoopSource { } *clientDefsServerSource;
@property (nonatomic) unsigned int serverPort;
@property (nonatomic) unsigned int clientPort;

- (BOOL)start;
- (void)stop;
- (id)initWithServerPort:(unsigned int)a0;
- (void)onStart;
- (void)onStop;
- (void)runCaptureThread;
- (void)stopRunCaptureThread;

@end
