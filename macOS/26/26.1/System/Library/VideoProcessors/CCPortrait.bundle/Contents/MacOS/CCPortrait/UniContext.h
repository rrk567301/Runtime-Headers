@class NSPointerArray;

@interface UniContext : NSObject

@property (retain) NSPointerArray *weakArray;

- (void)dealloc;
- (void).cxx_destruct;
- (void)empty;
- (id)init;
- (id)renderOrder;

@end
