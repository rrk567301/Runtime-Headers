@class NSArray;

@interface KHProductSpecificationComponent : NSObject {
    NSArray *_layoutIndexes;
    unsigned long long _componentType;
    char _outside;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)componentType;
- (id)initWithComponentType:(unsigned long long)a0 layoutIndexes:(id)a1 isOutside:(char)a2;
- (char)isOutsideComponent;
- (id)layoutIndexes;
- (id)newComponentGeneratorForProject:(id)a0;

@end
