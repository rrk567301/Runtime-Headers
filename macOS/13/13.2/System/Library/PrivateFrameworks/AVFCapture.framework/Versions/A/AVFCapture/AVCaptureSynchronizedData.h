@class AVCaptureSynchronizedDataInternal;

@interface AVCaptureSynchronizedData : NSObject {
    AVCaptureSynchronizedDataInternal *_synchronizedDataInternal;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } timestamp;

+ (void)initialize;

- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adjustedTimestamp;
- (id)_initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setTimestampOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setAdjustedTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)hasCorrespondingDepthData;
- (BOOL)hasCorrespondingVisionData;
- (int)constituentDeviceCaptureID;

@end
