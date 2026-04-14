@class NSMutableArray;

@interface PFTStack : NSObject {
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) id peek;
@property (readonly, nonatomic) unsigned long long count;

- (id)pop;
- (void)popWithHandler:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (void)push:(id)a0;
- (void)popAllWithHandler:(id /* block */)a0;
- (id)popAll;
- (void).cxx_destruct;
- (id)init;

@end
