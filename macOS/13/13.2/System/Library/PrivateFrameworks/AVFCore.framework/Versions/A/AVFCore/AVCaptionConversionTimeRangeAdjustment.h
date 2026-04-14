@interface AVCaptionConversionTimeRangeAdjustment : AVCaptionConversionAdjustment {
    void *_timeRangeAdjustmentInternal;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } startTimeOffset;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } durationOffset;

+ (id)captionConversionTimeRangeAdjustmentWithFigDictionary:(struct __CFDictionary { } *)a0;

- (void)dealloc;
- (id)description;
- (id)initWithFigDictionary:(struct __CFDictionary { } *)a0;
- (id)adjustmentType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startAdjustment;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })durationAdjustment;

@end
