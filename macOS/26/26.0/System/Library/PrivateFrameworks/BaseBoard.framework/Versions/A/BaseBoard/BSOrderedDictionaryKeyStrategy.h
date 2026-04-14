@interface BSOrderedDictionaryKeyStrategy : NSObject

@property (nonatomic) long long limitCount;
@property (copy, nonatomic) id /* block */ keyComparator;

+ (id)new;
+ (id)sortUsingComparator:(id /* block */)a0;
+ (id)sortByInsertionOrderWithEntryLimit:(long long)a0;
+ (id)sortByInsertionOrder;

- (id)_init;
- (id)init;
- (void).cxx_destruct;

@end
