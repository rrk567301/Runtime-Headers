@interface ANSTPromptPoint : NSObject

@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (readonly, nonatomic) BOOL isPositive;

- (id)initWithCGPoint:(struct CGPoint { double x0; double x1; })a0 isPositive:(BOOL)a1;

@end
