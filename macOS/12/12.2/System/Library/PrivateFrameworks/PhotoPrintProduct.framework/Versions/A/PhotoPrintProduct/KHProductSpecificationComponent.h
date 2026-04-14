@class NSArray;

@interface KHProductSpecificationComponent : NSObject {
    NSArray *_layoutIndexes;
    unsigned long long _componentType;
    BOOL _outside;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)componentType;
- (id)newComponentGeneratorForProject:(id)a0;
- (id)initWithComponentType:(unsigned long long)a0 layoutIndexes:(id)a1 isOutside:(BOOL)a2;
- (BOOL)isOutsideComponent;
- (id)layoutIndexes;

@end
