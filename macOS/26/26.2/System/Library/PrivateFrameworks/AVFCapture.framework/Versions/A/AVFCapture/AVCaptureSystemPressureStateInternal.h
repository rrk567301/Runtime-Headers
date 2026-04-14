@class AVFrameRateRange;

@interface AVCaptureSystemPressureStateInternal : NSObject {
    int _figLevel;
    unsigned long long _factors;
    AVFrameRateRange *_recommendedFrameRateRangeForPortrait;
    AVFrameRateRange *_recommendedFrameRateRangeForPhotoMode;
}

@property (readonly) int figLevel;
@property (readonly) unsigned long long factors;
@property (readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;
@property (readonly) AVFrameRateRange *recommendedFrameRateRangeForPhotoMode;

- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2 recommendedFrameRateRangeForPhotoMode:(id)a3;
- (void)dealloc;

@end
