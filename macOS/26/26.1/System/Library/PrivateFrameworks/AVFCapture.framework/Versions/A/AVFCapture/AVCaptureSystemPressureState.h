@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (int)figLevel;
- (id)recommendedFrameRateRangeForPhotoMode;
- (id)spiDebugDescription;
- (id)description;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2 recommendedFrameRateRangeForPhotoMode:(id)a3;
- (void)dealloc;
- (id)debugDescription;
- (id)recommendedFrameRateRangeForPortrait;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
