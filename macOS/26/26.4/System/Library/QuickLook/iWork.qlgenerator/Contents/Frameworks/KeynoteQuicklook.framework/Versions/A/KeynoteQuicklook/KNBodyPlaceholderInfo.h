@interface KNBodyPlaceholderInfo : KNPlaceholderInfo

+ (id)mixableObjectClasses;

- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (int)kind;
- (id)copyToInstantiateTemplatePlaceholder;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
