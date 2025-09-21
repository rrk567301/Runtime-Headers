@interface MUURLShorteningSessionConfiguration : NSObject

@property (nonatomic) double timeout;
@property (nonatomic) BOOL doNotUseCache;

- (id)init;
- (id)initWithTimeout:(double)a0 doNotUseCache:(BOOL)a1;

@end
