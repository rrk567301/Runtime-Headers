@class NSPointerArray;

@interface UniContext : NSObject

@property (retain) NSPointerArray *weakArray;

- (void)empty;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)renderOrder;

@end
