@interface CVPixelBufferARCWrapper : NSObject

@property (nonatomic) struct __CVBuffer { } *pearlDepth;
@property (nonatomic) struct __CVBuffer { } *pearlDx;
@property (nonatomic) struct __CVBuffer { } *pearlDy;
@property (nonatomic) struct __CVBuffer { } *pearlScore;

- (void)dealloc;
- (id)initWithPearlDepth:(struct __CVBuffer { } *)a0 pearlDx:(struct __CVBuffer { } *)a1 pearlDy:(struct __CVBuffer { } *)a2 pearlScore:(struct __CVBuffer { } *)a3;

@end
