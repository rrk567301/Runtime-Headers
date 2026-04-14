@class ILMediaGroupsTreeController;

@interface ILMediaGroupToObjectCountTransformer : NSValueTransformer {
    ILMediaGroupsTreeController *_treeController;
}

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (void)dealloc;
- (void)setTreeController:(id)a0;
- (id)treeController;

@end
