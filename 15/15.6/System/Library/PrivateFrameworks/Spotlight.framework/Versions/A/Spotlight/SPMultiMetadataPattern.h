@class NSArray;

@interface SPMultiMetadataPattern : SPMetadataPattern {
    NSArray *_patterns;
    long long _bitCount;
}

- (void).cxx_destruct;
- (char)matches:(id)a0;
- (long long)bitCount;
- (id)initWithDictionary:(id)a0 isCoreSpotlight:(char)a1;
- (unsigned long long)matchBits:(id)a0;
- (void)setAttributesForWildcard:(id)a0;

@end
