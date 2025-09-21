@class BUIViewController;

@interface BUIBatteryObserver : NSObject

@property (retain) BUIViewController *viewController;
@property (copy) id /* block */ observerBlock;
@property struct __CFRunLoopSource { } *runLoopSourceRef;

+ (id)createPMObserverWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)refreshUI;
- (id)_menuBarStringWithSourceState:(struct BUIPowerSourceTypeStruct { long long x0; long long x1; long long x2; long long x3; long long x4; char x5; char x6; char x7; char x8; char x9; char x10; char x11; char x12; char x13; char x14; double x15; })a0;
- (void)_update:(char)a0;

@end
