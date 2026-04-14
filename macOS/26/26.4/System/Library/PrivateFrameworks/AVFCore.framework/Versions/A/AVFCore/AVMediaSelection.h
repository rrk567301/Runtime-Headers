@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)_selectedMediaArray;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_groupDictionaries;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (void)_loadiVarsIfNeeded;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_internal;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_createDefaultMediaSelectionOptions;
- (unsigned long long)hash;
- (id)_initWithAsset:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)propertyList;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;

@end
