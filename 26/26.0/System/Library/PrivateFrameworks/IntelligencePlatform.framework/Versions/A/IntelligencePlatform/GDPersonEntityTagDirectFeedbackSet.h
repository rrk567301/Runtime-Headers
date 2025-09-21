@class NSMutableSet;

@interface GDPersonEntityTagDirectFeedbackSet : NSMutableSet {
    NSMutableSet *_internalSet;
}

- (void)removeObject:(id)a0;
- (unsigned long long)count;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (void).cxx_destruct;
- (void)addFeedbackInference:(id)a0;
- (id)initWithFeedbackInference:(id)a0;

@end
