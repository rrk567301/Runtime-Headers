@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (id)anyObject;
- (unsigned long long)count;
- (id)objectEnumerator;
- (BOOL)containsObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (id)_allObjectsFromBackingSet;
- (id)initWithHashBlock:(id /* block */)a0;

@end
