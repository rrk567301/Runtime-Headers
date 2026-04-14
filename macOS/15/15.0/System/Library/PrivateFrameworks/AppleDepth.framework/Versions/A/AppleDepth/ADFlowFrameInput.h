@class NSArray;

@interface ADFlowFrameInput : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *color;
@property (readonly, nonatomic) struct __CVBuffer { } *secondaryColor;
@property (readonly, nonatomic) struct __CVBuffer { } *pearl;
@property (readonly, retain, nonatomic) NSArray *pointClouds;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setColor:(struct __CVBuffer { } *)a0;
- (void)setSecondaryColor:(struct __CVBuffer { } *)a0;
- (void)setPointClouds:(id)a0;
- (void)setPearl:(struct __CVBuffer { } *)a0;

@end
