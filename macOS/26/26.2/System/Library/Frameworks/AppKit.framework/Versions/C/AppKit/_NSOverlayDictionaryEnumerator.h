@class NSArray;

@interface _NSOverlayDictionaryEnumerator : NSEnumerator {
    NSArray *_keys;
    long long _i;
}

- (id)nextObject;
- (id)allObjects;
- (void)dealloc;
- (id)initWithBaseKeys:(id)a0 overlayKeys:(id)a1;

@end
