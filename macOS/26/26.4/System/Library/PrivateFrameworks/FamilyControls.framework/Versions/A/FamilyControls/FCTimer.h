@class NSTimer;

@interface FCTimer : NSObject {
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;

- (void)setInterval:(double)a0;
- (void)setKind:(int)a0;
- (void)setUserInfo:(id)a0;
- (int)kind;
- (double)interval;
- (void)invalidate;
- (id)userInfo;
- (void)dealloc;
- (void)fireWithTarget:(id)a0 selector:(SEL)a1;
- (BOOL)isWarning;

@end
