@protocol CRGPort;

@interface CRGStaticSupportROIWithReferencePort : CRGStaticSupportROI

@property (readonly, nonatomic) id<CRGPort> referencePort;

+ (id)referencePort:(id)a0 left:(int)a1 right:(int)a2 top:(int)a3 bottom:(int)a4;
+ (id)referencePort:(SEL)a0 symmetricBorder:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSupport:(struct { })a0 referencePort:(id)a1;
- (struct { })resolveForOutputRect:(struct { })a0 withInfo:(const struct { } *)a1;

@end
