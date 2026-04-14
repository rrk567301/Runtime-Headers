@interface SLSZeroingWeakContainer : NSObject

@property id reference;
@property (readonly) id object;

+ (id)containerWithObject:(id)a0;

- (void)invalidate;
- (id)initWithObject:(id)a0;

@end
