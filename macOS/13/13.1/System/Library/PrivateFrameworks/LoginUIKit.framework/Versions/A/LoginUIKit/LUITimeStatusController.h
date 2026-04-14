@class LUITextField, NSDateFormatter, NSTimer;

@interface LUITimeStatusController : LUIController {
    LUITextField *_timeTextField;
    NSDateFormatter *_timeFormatter;
    NSTimer *_clockTimer;
    NSTimer *_dstTimer;
}

+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (id)initWithStyle:(int)a0;
- (void)tearDownController;
- (void)_clockTick:(id)a0;
- (void)_dstTick:(id)a0;
- (id)_nextDSTFireDate;
- (void)_setupContentView;
- (void)pauseController;
- (void)resumeController;
- (id)attributedStringFont;
- (void)_timePressed:(id)a0;
- (id)_userTimeFormat;

@end
