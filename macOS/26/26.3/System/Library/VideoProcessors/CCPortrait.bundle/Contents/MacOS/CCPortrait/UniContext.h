@class NSPointerArray;

@interface UniContext : NSObject

@property (retain) NSPointerArray *weakArray;

- (void)empty;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)renderOrder;

@end
