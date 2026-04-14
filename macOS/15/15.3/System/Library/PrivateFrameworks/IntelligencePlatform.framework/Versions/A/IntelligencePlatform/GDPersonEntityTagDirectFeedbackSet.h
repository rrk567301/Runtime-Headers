@class NSMutableSet;

@interface GDPersonEntityTagDirectFeedbackSet : NSMutableSet {
    NSMutableSet *_internalSet;
}

- (id)member:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;
- (void)addFeedbackInference:(id)a0;
- (id)initWithFeedbackInference:(id)a0;

@end
