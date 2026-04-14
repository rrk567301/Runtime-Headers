@class PDFTimerPrivate;

@interface PDFTimer : NSObject {
    PDFTimerPrivate *_private;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)update;
- (void)cancel;
- (void)_execute;
- (id)initWithThrottleDelay:(double)a0 forSelector:(SEL)a1 forTarget:(id)a2;
- (BOOL)isUpdateQueued;
- (id)initWithSelector:(SEL)a0 forTarget:(id)a1;

@end
