@class NSMutableSet;

@interface GDPersonEntityTagEventIDSet : NSMutableSet {
    NSMutableSet *_internalSet;
}

- (unsigned long long)count;
- (id)member:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;
- (void)addEventId:(long long)a0;
- (id)initWithEventId:(long long)a0;

@end
