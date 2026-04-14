@class PKMobileAssetManager, PKHowToUseWalletModel, NSDictionary;

@interface PKHowToUseWalletManager : NSObject {
    PKMobileAssetManager *_mobileAssetManager;
    PKHowToUseWalletModel *_cachedBaseModel;
    PKHowToUseWalletModel *_cachedMobileAssetModel;
    NSDictionary *_cachedHiddenCards;
}

+ (id)sharedInstance;

- (BOOL)hasContent;
- (id)init;
- (void).cxx_destruct;
- (id)_baseResourceBundle;
- (id)_baseResourceBundleHiddenCards;
- (id)_hiddenCardsPassingTest:(id /* block */)a0;
- (id)_jsonDictionaryForURL:(id)a0;
- (id)howToUseWalletModelForURL:(id)a0 bundle:(id)a1;
- (id)latestCardForLotIdentifier:(id)a0;
- (id)latestHowToUseWalletModel;

@end
