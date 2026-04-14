@class NSTimer;

@interface FCTimer : NSObject {
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;

- (void)invalidate;
- (int)kind;
- (void)setInterval:(double)a0;
- (void)setKind:(int)a0;
- (void)setUserInfo:(id)a0;
- (double)interval;
- (id)userInfo;
- (void)dealloc;
- (void)fireWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isWarning;

@end
