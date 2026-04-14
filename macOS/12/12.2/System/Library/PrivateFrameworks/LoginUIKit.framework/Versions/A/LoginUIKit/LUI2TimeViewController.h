@class NSTimer, NSDateFormatter, NSTextField;

@interface LUI2TimeViewController : LUI2ViewController

@property (retain) NSTextField *timeTextField;
@property (retain) NSDateFormatter *timeFormatter;
@property NSTimer *clockTimer;
@property NSTimer *dstTimer;
@property id target;
@property SEL action;

- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)_clockTick:(id)a0;
- (id)_nextDSTFireDate;
- (void)_updateTimeFormatter;
- (void)_dstTick:(id)a0;
- (void)_loadSymbols;
- (void)_formatterChanged:(id)a0;
- (id)_timeFont;

@end
