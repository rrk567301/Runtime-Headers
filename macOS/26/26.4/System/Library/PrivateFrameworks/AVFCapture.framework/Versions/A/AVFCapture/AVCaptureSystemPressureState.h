@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)debugDescription;
- (id)spiDebugDescription;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2 recommendedFrameRateRangeForPhotoMode:(id)a3;
- (BOOL)isEqual:(id)a0;
- (int)figLevel;
- (id)init;
- (id)description;
- (id)recommendedFrameRateRangeForPhotoMode;
- (id)recommendedFrameRateRangeForPortrait;
- (void)dealloc;

@end
