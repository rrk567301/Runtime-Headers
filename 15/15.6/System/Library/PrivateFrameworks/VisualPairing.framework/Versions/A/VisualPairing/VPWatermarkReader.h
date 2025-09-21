@class NSError, NSDate;

@interface VPWatermarkReader : NSObject {
    struct HCImagePerspectiveReader { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct InternalDataStructPersp *x5; char *x6; BOOL x7; } *_reader;
    unsigned long long _readerLastWatermarkTicks;
    unsigned long long _readerResetTicks;
    float _readerLastProgress;
}

@property (retain) NSDate *startDate;
@property (retain) NSDate *firstScannedCodeDate;
@property (retain) NSDate *firstCapturedFrameDate;
@property unsigned long long readerResetCount;
@property unsigned long long extractedCodeLength;
@property (retain) NSError *latestError;
@property unsigned long long readerWidth;
@property unsigned long long readerHeight;
@property unsigned long long readerRowBytes;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)readWatermarkIn:(struct __CVBuffer { } *)a0;
- (id)readWatermarkInPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
