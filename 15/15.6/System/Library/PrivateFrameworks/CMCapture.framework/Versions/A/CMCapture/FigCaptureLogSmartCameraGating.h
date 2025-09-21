@class NSSet, NSDate;

@interface FigCaptureLogSmartCameraGating : NSObject {
    int _gateIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDate *_openingTimestamp;
    NSSet *_currentPresentations;
    int _numFrames;
    int _numTrackedRegions;
    int _numBoxesPresented;
    int _numEmptyFrames;
    int _numClosingFrames;
}

+ (void)initialize;

- (void)dealloc;
- (id)initWithGateIdentifier:(int)a0;
- (void)logGateClosed;
- (void)logGateOpened;
- (void)logSmartCamIsConfident:(char)a0 presentedIdentifiers:(id)a1 presentedCount:(int)a2;
- (void)logTracksCreated:(int)a0;

@end
