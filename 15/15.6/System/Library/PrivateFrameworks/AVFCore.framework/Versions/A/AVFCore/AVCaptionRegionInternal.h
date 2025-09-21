@class AVCaptionPosition;

@interface AVCaptionRegionInternal : NSObject {
    struct OpaqueFigCaptionRegion { } *figCaptionRegion;
    AVCaptionPosition *position;
    AVCaptionPosition *endPosition;
    char _overridePositionShouldBeNil;
}

@end
