@interface InterpolationWork : NSObject

@property (nonatomic) int previous;
@property (nonatomic) int current;
@property (nonatomic) int target;

- (id)initWithPrevious:(int)a0 current:(int)a1 target:(int)a2;

@end
