@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)recommendedFrameRateRangeForPortrait;
- (id)debugDescription;
- (int)figLevel;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2 recommendedFrameRateRangeForPhotoMode:(id)a3;
- (id)description;
- (id)init;
- (id)recommendedFrameRateRangeForPhotoMode;
- (void)dealloc;
- (id)spiDebugDescription;
- (BOOL)isEqual:(id)a0;

@end
