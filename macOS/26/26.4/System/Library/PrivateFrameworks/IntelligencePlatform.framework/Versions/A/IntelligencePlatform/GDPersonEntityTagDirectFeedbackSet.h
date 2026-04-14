@class NSMutableSet;

@interface GDPersonEntityTagDirectFeedbackSet : NSMutableSet {
    NSMutableSet *_internalSet;
}

- (id)member:(id)a0;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (void)addFeedbackInference:(id)a0;
- (id)initWithFeedbackInference:(id)a0;

@end
