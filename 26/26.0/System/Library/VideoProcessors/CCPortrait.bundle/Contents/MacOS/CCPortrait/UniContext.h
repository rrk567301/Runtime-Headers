@class NSPointerArray;

@interface UniContext : NSObject

@property (retain) NSPointerArray *weakArray;

- (void)empty;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)renderOrder;

@end
