@class NSMutableArray;

@interface CNStack : NSObject {
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) id peek;
@property (readonly, nonatomic) unsigned long long count;

- (void)push:(id)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (id)pop;
- (void)popAllWithHandler:(id /* block */)a0;
- (id)popAll;
- (void)popWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
