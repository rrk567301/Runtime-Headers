@class ILMediaGroupsTreeController;

@interface ILMediaGroupToObjectCountTransformer : NSValueTransformer {
    ILMediaGroupsTreeController *_treeController;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void)dealloc;
- (id)transformedValue:(id)a0;
- (id)treeController;
- (void)setTreeController:(id)a0;

@end
