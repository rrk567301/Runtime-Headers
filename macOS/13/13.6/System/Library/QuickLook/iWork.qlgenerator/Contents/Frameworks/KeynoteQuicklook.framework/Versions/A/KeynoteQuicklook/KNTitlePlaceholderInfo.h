@interface KNTitlePlaceholderInfo : KNPlaceholderInfo

+ (id)mixableObjectClasses;

- (int)kind;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;
- (id)defaultBuildChunkTitle;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
