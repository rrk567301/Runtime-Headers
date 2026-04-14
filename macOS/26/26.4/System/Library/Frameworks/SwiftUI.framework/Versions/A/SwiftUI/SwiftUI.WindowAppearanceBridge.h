@interface SwiftUI.WindowAppearanceBridge : NSObject {
    void /* unknown type, empty encoding */ backgroundTracker;
    void /* unknown type, empty encoding */ shapeTracker;
    void /* unknown type, empty encoding */ defaultWindowBackgroundColor;
    void /* unknown type, empty encoding */ lastWindowContentShape;
    void /* unknown type, empty encoding */ cornerPath;
    void /* unknown type, empty encoding */ outerHitPath;
    void /* unknown type, empty encoding */ innerHitPath;
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ windowFrameAdjustment;
    void /* unknown type, empty encoding */ resizeTrackingArea;
    void /* unknown type, empty encoding */ backgroundHost;
    void /* unknown type, empty encoding */ isUpdatingFrameSize;
}

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)mouseMoved:(id)a0;

@end
