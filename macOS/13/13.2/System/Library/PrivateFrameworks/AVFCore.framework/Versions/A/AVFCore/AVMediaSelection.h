@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)propertyList;
- (id)_internal;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithAsset:(id)a0;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)_selectedMediaArray;
- (id)_groupDictionaries;
- (void)_loadiVarsIfNeeded;
- (void)_createDefaultMediaSelectionOptions;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;

@end
