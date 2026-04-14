@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {
    NSTimer *_timer;
    NSDate *_earliest;
}

- (void)didTimeOut:(id)a0;
- (void)addAssertion:(id)a0;
- (void)main;

@end
