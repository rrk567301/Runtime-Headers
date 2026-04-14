@class MAAutoAssetSelector;

@interface IRMobileAssetClient : NSObject

@property (retain, nonatomic) MAAutoAssetSelector *currentAssetSelector;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_createInterestInAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)getLockedAssetVersion;
- (id)lockAssetContent;
- (void)unlockAssetContent;

@end
