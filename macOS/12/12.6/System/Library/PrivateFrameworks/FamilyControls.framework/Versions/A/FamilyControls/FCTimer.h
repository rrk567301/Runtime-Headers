@class NSTimer;

@interface FCTimer : NSObject {
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;

- (void)dealloc;
- (id)userInfo;
- (void)invalidate;
- (void)setUserInfo:(id)a0;
- (double)interval;
- (void)setInterval:(double)a0;
- (int)kind;
- (void)setKind:(int)a0;
- (void)fireWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isWarning;

@end
