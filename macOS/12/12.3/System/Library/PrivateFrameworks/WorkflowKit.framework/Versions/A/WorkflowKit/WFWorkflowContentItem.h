@class WFWorkflowReference;

@interface WFWorkflowContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFWorkflowReference *workflowReference;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)folderName;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)actionCount;
- (id)workflowIcon;

@end
