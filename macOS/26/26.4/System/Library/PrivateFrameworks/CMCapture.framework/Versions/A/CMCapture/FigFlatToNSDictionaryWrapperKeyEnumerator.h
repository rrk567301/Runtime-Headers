@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {
    struct **_keys;
    int _keysCount;
    int _counter;
}

- (id)allObjects;
- (void)dealloc;
- (id)nextObject;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { } *)a0;

@end
