@interface NSWindowBatchOrdering : NSObject {
    id /* block */ completionCallback;
    struct NSWindowBatchOrderingTriplet { unsigned int x0; unsigned int x1; int x2; } *triplets;
    unsigned long long tripletCount;
    unsigned long long tripletCapacity;
}

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)unscheduleWindow:(long long)a0;
- (long long)bottomWindowOfAtLeastNormalWindowLevel;
- (void)scheduleWindow:(long long)a0 forBatchOrdering:(long long)a1 relativeTo:(long long)a2;
- (void)performRelativeToWindow:(long long)a0;
- (void)addCompletionCallback:(id /* block */)a0;
- (unsigned long long)indexOfTripletWithWindow:(long long)a0;
- (void)ensureCapacity:(unsigned long long)a0;
- (void)performBatchOrderingForTripletsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
