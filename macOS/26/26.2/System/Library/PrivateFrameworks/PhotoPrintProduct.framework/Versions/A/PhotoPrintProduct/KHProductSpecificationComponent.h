@class NSArray;

@interface KHProductSpecificationComponent : NSObject {
    NSArray *_layoutIndexes;
    unsigned long long _componentType;
    BOOL _outside;
}

- (id)description;
- (unsigned long long)componentType;
- (void)dealloc;
- (id)initWithComponentType:(unsigned long long)a0 layoutIndexes:(id)a1 isOutside:(BOOL)a2;
- (BOOL)isOutsideComponent;
- (id)layoutIndexes;
- (id)newComponentGeneratorForProject:(id)a0;

@end
