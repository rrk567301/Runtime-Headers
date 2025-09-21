@class NSArray, NSMutableDictionary;

@interface XSDefinition : NSObject <NSCopying> {
    NSMutableDictionary *_types;
}

@property (readonly, copy, nonatomic) NSArray *types;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (Class)typeForName:(id)a0;
- (id)propertyForName:(id)a0;
- (id)isSpecifiedKeyForAttributeName:(id)a0;
- (char)flattenMultiValueElementWithName:(id)a0;
- (id)isSpecifiedKeyForElementName:(id)a0;
- (unsigned long long)maxCountForElementName:(id)a0;
- (void)setType:(Class)a0 forName:(id)a1;

@end
