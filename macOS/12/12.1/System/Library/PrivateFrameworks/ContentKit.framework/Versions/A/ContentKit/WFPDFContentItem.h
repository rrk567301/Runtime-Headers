@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (void)initialize;
+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)createImageWithFileType:(id)a0 colorspace:(struct CGColorSpace { } *)a1 resolution:(double)a2 completion:(id /* block */)a3;
- (void)enumeratePagesInDocument:(id)a0 block:(id /* block */)a1;

@end
