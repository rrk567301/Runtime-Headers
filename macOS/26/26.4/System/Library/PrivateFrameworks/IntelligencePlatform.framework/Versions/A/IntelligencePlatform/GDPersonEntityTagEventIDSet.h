@class NSMutableSet;

@interface GDPersonEntityTagEventIDSet : NSMutableSet {
    NSMutableSet *_internalSet;
}

- (id)member:(id)a0;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (void)addEventId:(long long)a0;
- (id)initWithEventId:(long long)a0;

@end
