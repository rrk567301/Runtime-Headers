@class AVAsset, AVMediaSelectionInternal;

@interface AVMediaSelection : NSObject <NSCopying, NSMutableCopying> {
    AVMediaSelectionInternal *_mediaSelection;
}

@property (readonly, weak, nonatomic) AVAsset *asset;

- (BOOL)mediaSelectionCriteriaCanBeAppliedAutomaticallyToMediaSelectionGroup:(id)a0;
- (id)_internal;
- (id)propertyList;
- (id)_initWithAsset:(id)a0;
- (id)_initWithAssetWithoutGroupDictionaries:(id)a0;
- (void)_createDefaultMediaSelectionOptions;
- (id)description;
- (id)_selectedMediaArray;
- (id)_dictionaryGroupsWithSelectedOption;
- (id)_initWithDeferredLoadingOfAsset:(id)a0 selectedMediaArray:(id)a1;
- (id)_initWithAsset:(id)a0 selectedMediaArray:(id)a1;
- (void)dealloc;
- (void)_loadiVarsIfNeeded;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAsset:(id)a0 propertyList:(id)a1;
- (id)selectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_propertyListForSelectedMediaOptionInMediaSelectionGroup:(id)a0;
- (id)_groupDictionaries;

@end
