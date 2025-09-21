@class NSString;

@interface PLMomentTheme : PLGraphNodeContainer

@property (copy, nonatomic) NSString *themeName;

+ (id)newNodeContainerWithManagedObjectContext:(id)a0;
+ (id)_insertThemeWithName:(id)a0 inContext:(id)a1;
+ (id)_fetchThemeNodeWithName:(id)a0 inContext:(id)a1;
+ (void)_resolveThemeEdgeCardinalityConstraintConflictsForNode:(id)a0;
+ (void)_resolveThemeUniquenessConstraintConflictsForNode:(id)a0;
+ (id)fetchExistingOrInsertThemeWithName:(id)a0 inContext:(id)a1;
+ (id)momentThemeLabelInContext:(id)a0;
+ (BOOL)needsConstraintConflictResolutionForNode:(id)a0;
+ (id)noThemesLabelInContext:(id)a0;
+ (id)predicateForThemeNodesWithName:(id)a0 inContext:(id)a1;
+ (void)resolveConstraintConflictsForNode:(id)a0;

- (id)debugDescription;
- (id)initWithNode:(id)a0;

@end
