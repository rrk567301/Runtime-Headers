@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_loadiVarsIfNeeded;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_groupDictionaries;
- (id)_initWithAsset:(id)a0;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (id)_internal;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)description;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_selectedMediaArray;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_createDefaultMediaSelectionOptions;
- (id)propertyList;

@end
