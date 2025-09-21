@class PTCinematographyDetection, NSMutableArray, NSMutableDictionary;

@interface PTCinematographyFrameDetectionSmoother : NSObject

@property (retain) NSMutableArray *frames;
@property (retain) PTCinematographyDetection *lastKnownFocusDetection;
@property (retain) NSMutableDictionary *firstFocusSmootherByTrackNumber;
@property char didEndFrames;
@property char didCacheIsNextFrameAvailable;
@property char isNextFrameAvailableCache;
@property (readonly) char isNextFrameAtEnd;
@property (readonly) char isNextFrameAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)nextFrame;
- (void)addFrame:(id)a0;
- (void)_reinit;
- (id)_activeTrackNumbers;
- (char)_computeIsNextFrameAvailable;
- (void)_dropAllFocusSmoothersIfLeaked;
- (void)_endFocusSmoothersForTrackNumbers:(id)a0;
- (id)_focusSmootherForAppendingWithTrackIdentifier:(long long)a0;
- (id)_focusSmootherForReadingWithTrackIdentifier:(long long)a0;
- (void)_invalidateIsNextFrameAvailableCache;
- (id)_newFocusSmoother;
- (void)_skipToNextFocusSmootherWithTrackIdentifier:(long long)a0;
- (void)_updateFocusDetectionForFrame:(id)a0;
- (void)endFrames;

@end
