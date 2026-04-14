@class NSTimer;

@interface FCTimer : NSObject {
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;

- (double)interval;
- (void)setUserInfo:(id)a0;
- (id)userInfo;
- (void)setKind:(int)a0;
- (int)kind;
- (void)invalidate;
- (void)setInterval:(double)a0;
- (void)dealloc;
- (void)fireWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isWarning;

@end
