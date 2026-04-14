@class NSTimer;

@interface StressHUD : NSPanel {
    NSTimer *clock;
}

- (void)start;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)becameActive;
- (void)becameInactive;
- (void)tick;

@end
