@class NSTimer;

@interface FCTimer : NSObject {
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;

- (void)invalidate;
- (void)setUserInfo:(id)a0;
- (void)setKind:(int)a0;
- (void)setInterval:(double)a0;
- (double)interval;
- (int)kind;
- (void)dealloc;
- (id)userInfo;
- (void)fireWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isWarning;

@end
