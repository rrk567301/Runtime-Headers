@class NSData;

@interface CAREAtlasVideoFrame : NSObject {
    struct __CVBuffer { } *m_framePixelBuffer;
    NSData *m_frameMetadata;
    unsigned long long m_syncedFrameNumber;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_frameTime;
}

@property (readonly, nonatomic) struct __CVBuffer { } *framePixelBuffer;
@property (readonly, nonatomic) NSData *frameMetadata;
@property (readonly, nonatomic) unsigned long long syncedFrameNumber;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameTime;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 syncedFrameNumber:(unsigned long long)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
