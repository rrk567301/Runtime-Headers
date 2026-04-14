@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (id)_groupDictionaries;
- (void)_loadiVarsIfNeeded;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_selectedMediaArray;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_initWithAsset:(id)a0;
- (id)description;
- (id)propertyList;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_internal;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (void)_createDefaultMediaSelectionOptions;
- (void)dealloc;

@end
