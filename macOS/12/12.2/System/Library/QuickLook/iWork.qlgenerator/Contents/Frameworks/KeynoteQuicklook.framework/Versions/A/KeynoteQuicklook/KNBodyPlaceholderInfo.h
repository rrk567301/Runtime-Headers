@interface KNBodyPlaceholderInfo : KNPlaceholderInfo

- (int)kind;
- (id)typeName;
- (void)acceptVisitor:(id)a0;
- (id)initWithKNPlaceholderInfo:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;

@end
