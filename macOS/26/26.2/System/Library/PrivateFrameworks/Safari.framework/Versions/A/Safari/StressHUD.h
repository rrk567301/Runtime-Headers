@class NSTimer;

@interface StressHUD : NSPanel {
    NSTimer *clock;
}

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)init;
- (void)becameActive;
- (void)becameInactive;
- (void)tick;

@end
