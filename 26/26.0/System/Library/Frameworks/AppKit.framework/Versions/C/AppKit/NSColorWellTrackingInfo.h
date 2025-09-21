@interface NSColorWellTrackingInfo : NSObject {
    BOOL startedWithShiftDown;
    BOOL startedAsActive;
    BOOL startedInsideColor;
    BOOL exclusive;
    struct CGPoint { double x; double y; } startLocalPoint;
}

@end
