@class ILMediaGroupsTreeController;

@interface ILMediaGroupToObjectCountTransformer : NSValueTransformer {
    ILMediaGroupsTreeController *_treeController;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (void)dealloc;
- (id)transformedValue:(id)a0;
- (id)treeController;
- (void)setTreeController:(id)a0;

@end
