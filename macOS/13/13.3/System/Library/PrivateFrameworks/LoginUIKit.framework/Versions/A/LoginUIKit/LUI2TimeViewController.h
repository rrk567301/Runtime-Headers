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
- (void)_dstTick:(id)a0;
- (void)_formatterChanged:(id)a0;
- (void)_loadSymbols;
- (id)_nextDSTFireDate;
- (id)_timeFont;
- (void)_updateTimeFormatter;

@end
