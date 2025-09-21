@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)debugDescription;
- (void)dealloc;
- (id)recommendedFrameRateRangeForPhotoMode;
- (id)init;
- (id)spiDebugDescription;
- (id)description;
- (id)recommendedFrameRateRangeForPortrait;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2 recommendedFrameRateRangeForPhotoMode:(id)a3;
- (int)figLevel;
- (BOOL)isEqual:(id)a0;

@end
