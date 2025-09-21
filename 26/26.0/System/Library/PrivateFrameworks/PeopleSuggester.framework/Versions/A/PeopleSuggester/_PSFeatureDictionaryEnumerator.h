@class NSArray, NSDictionary, NSEnumerator;

@interface _PSFeatureDictionaryEnumerator : NSEnumerator {
    NSArray *_timeBucketsArray;
    NSDictionary *_timeBuckets;
    NSDictionary *_otherValues;
    unsigned long long _i;
    NSEnumerator *_keyEnumerator;
    BOOL _loadedOtherValuesEnumerator;
}

- (id)nextObject;
- (id)init;
- (id)allObjects;
- (void).cxx_destruct;

@end
