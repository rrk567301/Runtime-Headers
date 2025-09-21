@class MRLayer, MCTransitionTrigger, MRGesturePanZoomRotation;

@interface MRTransitionChanges : NSObject {
    double startTime;
    double duration;
    char isBackwards;
}

@property (retain) MRLayer *currentSublayer;
@property (retain) MRLayer *nextSublayer;
@property (retain) MCTransitionTrigger *transition;
@property (retain) MRGesturePanZoomRotation *pzr;

- (void)dealloc;

@end
