@class NSTimer;

@interface StressHUD : NSPanel {
    NSTimer *clock;
}

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)becameActive;
- (void)becameInactive;
- (void)tick;

@end
