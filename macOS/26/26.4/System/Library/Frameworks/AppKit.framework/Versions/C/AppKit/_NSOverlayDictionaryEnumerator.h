@class NSArray;

@interface _NSOverlayDictionaryEnumerator : NSEnumerator {
    NSArray *_keys;
    long long _i;
}

- (id)allObjects;
- (void)dealloc;
- (id)nextObject;
- (id)initWithBaseKeys:(id)a0 overlayKeys:(id)a1;

@end
