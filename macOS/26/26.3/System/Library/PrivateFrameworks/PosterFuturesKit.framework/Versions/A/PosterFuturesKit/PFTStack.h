@class NSMutableArray;

@interface PFTStack : NSObject {
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) id peek;
@property (readonly, nonatomic) unsigned long long count;

- (void)popAllWithHandler:(id /* block */)a0;
- (id)pop;
- (void)popWithHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)popAll;
- (void)push:(id)a0;
- (void)removeObject:(id)a0;

@end
