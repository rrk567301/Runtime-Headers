@interface SPMetadataPattern : NSObject

@property (readonly) long long bitCount;

- (BOOL)matches:(id)a0;
- (id)copyForConcurrentUse;
- (id)filterResults:(id)a0;
- (unsigned long long)matchBits:(id)a0;
- (id)mutableFilterResults:(id)a0 queryState:(id /* block */)a1;
- (void)setAttributesForWildcard:(id)a0;

@end
