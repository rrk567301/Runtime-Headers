@interface NSKeyValueContainerClass : NSObject {
    Class _originalClass;
    void /* function */ *_cachedObservationInfoImplementation;
    void /* function */ *_cachedSetObservationInfoImplementation;
    char _cachedSetObservationInfoTakesAnObject;
    struct { Class x0; Class x1; struct __CFSet *x2; struct __CFDictionary *x3; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned int x1; } x4; char x5; } *_notifyingInfo;
}

- (id)description;
- (id)initWithOriginalClass:(Class)a0;

@end
