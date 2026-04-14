@class WFWindow;

@interface WFWindowContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFWindow *window;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (id)propertyBuilders;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (BOOL)hasLibrary;

- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
