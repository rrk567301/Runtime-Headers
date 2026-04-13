@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2;
- (int)figLevel;
- (id)recommendedFrameRateRangeForPortrait;
- (id)spiDebugDescription;

@end
