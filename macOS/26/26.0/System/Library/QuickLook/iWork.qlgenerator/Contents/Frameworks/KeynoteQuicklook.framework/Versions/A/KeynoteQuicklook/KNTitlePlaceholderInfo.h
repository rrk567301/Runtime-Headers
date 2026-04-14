@interface KNTitlePlaceholderInfo : KNPlaceholderInfo

+ (id)mixableObjectClasses;

- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (int)kind;
- (id)copyToInstantiateTemplatePlaceholder;
- (id)defaultBuildChunkTitle;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
