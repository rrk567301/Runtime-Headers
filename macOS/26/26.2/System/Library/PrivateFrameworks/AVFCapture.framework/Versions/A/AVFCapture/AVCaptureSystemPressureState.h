@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)spiDebugDescription;
- (BOOL)isEqual:(id)a0;
- (id)recommendedFrameRateRangeForPhotoMode;
- (int)figLevel;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2 recommendedFrameRateRangeForPhotoMode:(id)a3;
- (id)debugDescription;
- (id)description;
- (id)recommendedFrameRateRangeForPortrait;
- (id)init;
- (void)dealloc;

@end
