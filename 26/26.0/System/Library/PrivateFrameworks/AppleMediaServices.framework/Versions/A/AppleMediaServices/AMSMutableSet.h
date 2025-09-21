@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (id)anyObject;
- (unsigned long long)count;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void)addObjectsFromArray:(id)a0;
- (id)objectEnumerator;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)_allObjectsFromBackingSet;
- (id)initWithHashBlock:(id /* block */)a0;

@end
