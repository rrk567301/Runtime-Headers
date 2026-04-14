@class NSArray;

@interface SPMultiMetadataPattern : SPMetadataPattern {
    NSArray *_patterns;
    long long _bitCount;
}

- (BOOL)matches:(id)a0;
- (void).cxx_destruct;
- (long long)bitCount;
- (id)initWithDictionary:(id)a0 isCoreSpotlight:(BOOL)a1;
- (unsigned long long)matchBits:(id)a0;
- (void)setAttributesForWildcard:(id)a0;

@end
