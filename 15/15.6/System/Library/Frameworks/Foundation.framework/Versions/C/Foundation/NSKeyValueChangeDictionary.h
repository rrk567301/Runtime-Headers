@class NSIndexSet, NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {
    struct { unsigned long long kind; NSObject *oldValue; NSObject *newValue; NSIndexSet *indexes; id extraData; } _details;
    NSObject *_originalObservable;
    char _isPriorNotification;
    char _isRetainingObjects;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)initWithDetailsNoCopy:(struct { unsigned long long x0; id x1; id x2; id x3; id x4; })a0 originalObservable:(id)a1 isPriorNotification:(char)a2;
- (void)retainObjects;
- (void)setDetailsNoCopy:(struct { unsigned long long x0; id x1; id x2; id x3; id x4; })a0 originalObservable:(id)a1;
- (void)setOriginalObservable:(id)a0;

@end
