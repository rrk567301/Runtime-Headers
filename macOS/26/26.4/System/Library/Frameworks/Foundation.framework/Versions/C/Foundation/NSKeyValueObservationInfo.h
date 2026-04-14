@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {
    NSArray *_observances;
    unsigned long long _cachedHash;
    BOOL _cachedIsShareable;
}

@property (readonly, nonatomic) BOOL containsOnlyInternalObservationHelpers;

- (BOOL)isEqual:(id)a0;
- (id)_copyByAddingObservance:(id)a0;
- (id)copy;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithObservances:(id *)a0 count:(unsigned long long)a1 hashValue:(unsigned long long)a2;
- (void)dealloc;

@end
