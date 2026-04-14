@class NSArray, NSEnumerator;

@interface _PASLowValueCardinalityMutableDictionaryEnumerator : NSEnumerator {
    NSArray *_objectsAndKeys;
    unsigned long long _i;
    NSEnumerator *_keyEnumerator;
}

- (id)nextObject;
- (id)init;
- (id)allObjects;
- (void).cxx_destruct;

@end
