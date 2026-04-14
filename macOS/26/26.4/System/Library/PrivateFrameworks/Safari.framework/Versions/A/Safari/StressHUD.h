@class NSTimer;

@interface StressHUD : NSPanel {
    NSTimer *clock;
}

- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)becameActive;
- (void)becameInactive;
- (void)tick;

@end
