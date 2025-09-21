@class NSArray;

@interface NSKeyValueObservationInfo : NSObject {
    NSArray *_observances;
    unsigned long long _cachedHash;
    char _cachedIsShareable;
}

@property (readonly, nonatomic) char containsOnlyInternalObservationHelpers;

- (void)dealloc;
- (id)copy;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)_copyByAddingObservance:(id)a0;
- (id)_initWithObservances:(id *)a0 count:(unsigned long long)a1 hashValue:(unsigned long long)a2;

@end
