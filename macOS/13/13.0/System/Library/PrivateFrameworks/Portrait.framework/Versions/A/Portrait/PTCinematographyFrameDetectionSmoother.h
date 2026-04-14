@class PTCinematographyDetection, NSMutableArray, NSMutableDictionary;

@interface PTCinematographyFrameDetectionSmoother : NSObject

@property (retain) NSMutableArray *frames;
@property (retain) PTCinematographyDetection *lastKnownFocusDetection;
@property (retain) NSMutableDictionary *firstFocusSmootherByTrackNumber;
@property BOOL didEndFrames;
@property BOOL didCacheIsNextFrameAvailable;
@property BOOL isNextFrameAvailableCache;
@property (readonly) BOOL isNextFrameAtEnd;
@property (readonly) BOOL isNextFrameAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)nextFrame;
- (void)addFrame:(id)a0;
- (void)_reinit;
- (void)endFrames;
- (void)_updateFocusDetectionForFrame:(id)a0;
- (void)_invalidateIsNextFrameAvailableCache;
- (BOOL)_computeIsNextFrameAvailable;
- (id)_newFocusSmoother;
- (id)_activeTrackNumbers;
- (id)_focusSmootherForReadingWithTrackIdentifier:(long long)a0;
- (void)_skipToNextFocusSmootherWithTrackIdentifier:(long long)a0;
- (id)_focusSmootherForAppendingWithTrackIdentifier:(long long)a0;
- (void)_endFocusSmoothersForTrackNumbers:(id)a0;
- (void)_dropAllFocusSmoothersIfLeaked;

@end
