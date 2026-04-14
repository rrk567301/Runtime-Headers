@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {
    NSArray *_observances;
    unsigned long long _cachedHash;
    BOOL _cachedIsShareable;
}

@property (readonly, nonatomic) BOOL containsOnlyInternalObservationHelpers;

- (id)copy;
- (unsigned long long)hash;
- (id)_copyByAddingObservance:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_initWithObservances:(id *)a0 count:(unsigned long long)a1 hashValue:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;

@end
