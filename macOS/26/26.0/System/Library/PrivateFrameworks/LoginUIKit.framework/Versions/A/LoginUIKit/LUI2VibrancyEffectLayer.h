@class NSArray;

@interface LUI2VibrancyEffectLayer : CALayer

@property (nonatomic, copy) NSArray *sublayers;

- (void)addSublayer:(id)a0;
- (void)insertSublayer:(id)a0 below:(id)a1;
- (id)initWithLayer:(id)a0;
- (id)init;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (id)initWithCoder:(id)a0;
- (void)replaceSublayer:(id)a0 with:(id)a1;

@end
