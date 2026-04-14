@class NSDictionary;

@interface ADFlowFrameOutput : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *depth;
@property (readonly, nonatomic) struct __CVBuffer { } *confidence;
@property (readonly, nonatomic) struct __CVBuffer { } *normals;
@property (readonly, nonatomic) NSDictionary *figuresOfMerit;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setDepth:(struct __CVBuffer { } *)a0;
- (void)setConfidence:(struct __CVBuffer { } *)a0;
- (void)setFiguresOfMerit:(id)a0;
- (void)setNormals:(struct __CVBuffer { } *)a0;

@end
