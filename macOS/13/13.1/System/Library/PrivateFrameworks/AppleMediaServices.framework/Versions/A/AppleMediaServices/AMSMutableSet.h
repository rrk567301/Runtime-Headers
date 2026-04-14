@class NSMutableSet;

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet *_backingSet;
}

@property (copy, nonatomic) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)a0;

- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)allObjects;
- (id)member:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)anyObject;
- (id)initWithHashBlock:(id /* block */)a0;
- (id)_allObjectsFromBackingSet;

@end
