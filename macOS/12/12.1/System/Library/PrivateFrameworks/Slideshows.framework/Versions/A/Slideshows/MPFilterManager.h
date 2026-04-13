@class NSArray, NSMutableDictionary;

@interface MPFilterManager : NSObject {
    NSMutableDictionary *mFilters;
    NSArray *mFilterCategories;
    NSMutableDictionary *mFilterPresets;
}

+ (id)sharedManager;
+ (void)releaseSharedManager;
+ (void)loadFilterManagerWithPaths:(id)a0;

- (void)dealloc;
- (id)initWithPaths:(id)a0;
- (id)allFilterIDs;
- (id)versionOfFilterID:(id)a0;
- (id)filterIDsForCategoryID:(id)a0;
- (id)filterCategoryIDs;
- (id)presetIDsForFilterID:(id)a0;
- (id)attributesForFilterID:(id)a0 andPresetID:(id)a1;
- (id)animationsForFilterID:(id)a0 andPresetID:(id)a1;
- (id)constraintsForFilterPresetsMatchingList:(id)a0 andCriteria:(id)a1;
- (id)randomFilterPresetFromList:(id)a0 abidingWithConstraints:(id)a1;
- (id)filterPresetsMatchingCriteria:(id)a0;
- (id)randomFilter:(BOOL)a0;

@end
