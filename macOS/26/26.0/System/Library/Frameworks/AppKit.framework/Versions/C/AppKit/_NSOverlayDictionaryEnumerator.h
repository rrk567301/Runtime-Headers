@class NSArray;

@interface _NSOverlayDictionaryEnumerator : NSEnumerator {
    NSArray *_keys;
    long long _i;
}

- (void)dealloc;
- (id)nextObject;
- (id)allObjects;
- (id)initWithBaseKeys:(id)a0 overlayKeys:(id)a1;

@end
