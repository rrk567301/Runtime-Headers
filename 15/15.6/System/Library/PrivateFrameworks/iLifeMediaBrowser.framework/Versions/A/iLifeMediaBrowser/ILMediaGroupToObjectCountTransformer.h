@class ILMediaGroupsTreeController;

@interface ILMediaGroupToObjectCountTransformer : NSValueTransformer {
    ILMediaGroupsTreeController *_treeController;
}

+ (char)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void)dealloc;
- (id)transformedValue:(id)a0;
- (void)setTreeController:(id)a0;
- (id)treeController;

@end
