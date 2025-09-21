@class CUIPSDLayerGroupRef;

@interface CUIPSDLayerEnumerator : NSEnumerator {
    CUIPSDLayerGroupRef *_layerGroup;
    unsigned int _currentIndex;
    char _isImageFile;
}

+ (id)enumeratorWithPSDImage:(id)a0;
+ (id)enumeratorWithPSDLayerGroup:(id)a0;

- (void)dealloc;
- (id)allObjects;
- (id)nextObject;
- (id)initWithPSDImage:(id)a0;
- (id)initWithPSDLayerGroup:(id)a0;

@end
