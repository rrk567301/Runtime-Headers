@class NSString, PKDiscoveryArticleLayout, NSNumber, PKHowToUseWalletRequirements;

@interface PKHowToUseWalletCard : NSObject {
    NSString *_discoveryBundlePath;
}

@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long cardSizeType;
@property (readonly, nonatomic) PKDiscoveryArticleLayout *article;
@property (readonly, nonatomic) PKHowToUseWalletRequirements *requirements;
@property (readonly, nonatomic) NSString *lotIdentifier;

+ (id)cardToPrioritize:(id)a0 otherCard:(id)a1;
+ (id)cardsByPriority:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (id)initWithMobileAssetBundle:(id)a0;

@end
