@class NSString, NSArray, NSURL, NSNumber;

@interface PKHowToUseWalletModel : NSObject {
    NSURL *_localizationBundleURL;
}

@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSString *titleKey;
@property (readonly, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (id)localizationBundle;
- (id)cardsPassingTest:(id /* block */)a0;
- (BOOL)containsCardPassingTest:(id /* block */)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)initWithMobileAssetBundle:(id)a0;

@end
