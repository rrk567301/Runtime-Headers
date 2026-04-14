@class NSObject, NSString, NSTextField;

@interface VFXUIVector3TextField : VFXUIBindableView {
    NSTextField *tx;
    NSTextField *ty;
    NSTextField *tz;
    NSObject *observer;
    NSString *observedKeyPath;
}

@property (nonatomic) void /* unknown type, empty encoding */ vector3;

- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
