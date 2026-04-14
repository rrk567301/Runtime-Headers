@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)propertyList;
- (id)_internal;
- (unsigned long long)hash;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_selectedMediaArray;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_groupDictionaries;
- (id)description;
- (void)dealloc;
- (void)_createDefaultMediaSelectionOptions;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithAsset:(id)a0;
- (void)_loadiVarsIfNeeded;

@end
