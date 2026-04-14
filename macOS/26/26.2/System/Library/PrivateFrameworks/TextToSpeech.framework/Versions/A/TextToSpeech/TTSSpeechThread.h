@class NSRunLoop, NSPort, NSObject;
@protocol OS_voucher;

@interface TTSSpeechThread : NSThread {
    NSPort *_machPort;
    NSRunLoop *_threadRunLoop;
}

@property (retain, nonatomic) NSObject<OS_voucher> *voucher;

- (void)cancel;
- (void)stop;
- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
