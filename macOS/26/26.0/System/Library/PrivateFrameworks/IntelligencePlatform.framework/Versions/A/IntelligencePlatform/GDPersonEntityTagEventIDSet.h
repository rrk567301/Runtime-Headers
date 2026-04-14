@class NSMutableSet;

@interface GDPersonEntityTagEventIDSet : NSMutableSet {
    NSMutableSet *_internalSet;
}

- (void)removeObject:(id)a0;
- (unsigned long long)count;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (void)addEventId:(long long)a0;
- (id)initWithEventId:(long long)a0;

@end
