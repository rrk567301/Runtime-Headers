@interface KNTitlePlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (id)initWithKNPlaceholderInfo:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;
- (id)defaultBuildChunkTitle;

@end
