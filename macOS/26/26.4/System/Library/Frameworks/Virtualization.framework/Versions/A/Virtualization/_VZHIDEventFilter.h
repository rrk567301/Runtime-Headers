@interface _VZHIDEventFilter : NSObject {
    void /* unknown type, empty encoding */ filters;
    void /* unknown type, empty encoding */ translators;
}

+ (BOOL)isEnabled;
+ (BOOL)hasEventTranslators;

- (void).cxx_destruct;
- (id)init;
- (id)getHIDReportsFromHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)getHIDReportsFromNSEvent:(id)a0;
- (void)updateCoordinateTransform:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFlipped:(BOOL)a1;

@end
