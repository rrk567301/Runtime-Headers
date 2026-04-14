@class NSString, MTLTextureDescriptor;

@interface FigMetalTextureDescriptor : NSObject

@property (nonatomic) BOOL isLinear;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) MTLTextureDescriptor *desc;
@property (nonatomic) int allocationHint;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDescriptor:(id)a0 allocatorLabel:(id)a1;

@end
