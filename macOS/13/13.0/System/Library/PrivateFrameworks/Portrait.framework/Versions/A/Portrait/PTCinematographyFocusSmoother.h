@class MutableFloatArray;

@interface PTCinematographyFocusSmoother : NSObject

@property (retain) MutableFloatArray *cachedSamples;
@property unsigned long long unprocessedSampleCount;
@property (readonly) unsigned long long minSamplesNeeded;
@property (readonly) BOOL didEndSamples;
@property (readonly) BOOL isEndOfSmoothedSamples;
@property (readonly) BOOL isSmoothedSampleAvailable;
@property (retain) PTCinematographyFocusSmoother *nextFocusSmoother;
@property (readonly) PTCinematographyFocusSmoother *lastFocusSmoother;

- (id)init;
- (void).cxx_destruct;
- (void)addSample:(float)a0;
- (void)endSamples;
- (float)nextSmoothedSample;
- (float)_getSmoothedSample;
- (void)_advanceToNextSmoothedSample;
- (void)_padToFill;
- (void)_padByCount:(unsigned long long)a0;
- (float)_lastAddedSample;

@end
