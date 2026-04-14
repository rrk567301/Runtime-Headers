@class NSSet, NSMutableDictionary;

@interface _LTDLanguageAssetCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSSet *requiredAssetIdentifiers;
@property (nonatomic) unsigned long long readyFilterSet;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)assetForIdentifier:(id)a0;
- (id)_availableIdentifiers;
- (id)_readAllAssets;
- (void)applyAssetUpdates:(id)a0;
- (id)assetsFilteredUsing:(unsigned long long)a0;
- (BOOL)isCancelledDownloadComponent:(id)a0;
- (BOOL)isReadyForFilter:(unsigned long long)a0;
- (void)markReadyForFilter:(unsigned long long)a0;
- (id)preheatWithLanguages:(id)a0;
- (void)setRequiredAssets:(id)a0;

@end
