@class NSScreen;

@interface AEDConcreteScreen : NSObject <AEDScreen> {
    NSScreen *_screen;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void).cxx_destruct;

@end
