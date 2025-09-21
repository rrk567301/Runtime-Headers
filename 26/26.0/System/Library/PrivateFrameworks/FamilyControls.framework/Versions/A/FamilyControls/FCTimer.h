@class NSTimer;

@interface FCTimer : NSObject {
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;

- (void)setKind:(int)a0;
- (void)setInterval:(double)a0;
- (void)dealloc;
- (double)interval;
- (void)invalidate;
- (int)kind;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (void)fireWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isWarning;

@end
