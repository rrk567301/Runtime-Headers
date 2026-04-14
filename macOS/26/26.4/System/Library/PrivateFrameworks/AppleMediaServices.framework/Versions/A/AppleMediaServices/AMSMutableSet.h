@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (void)addObjectsFromArray:(id)a0;
- (id)anyObject;
- (id)member:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)_allObjectsFromBackingSet;
- (id)initWithHashBlock:(id /* block */)a0;

@end
