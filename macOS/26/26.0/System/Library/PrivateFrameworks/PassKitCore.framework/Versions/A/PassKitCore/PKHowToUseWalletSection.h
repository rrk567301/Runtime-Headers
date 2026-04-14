@class NSString, NSArray, NSURL, PKHowToUseWalletRequirements;

@interface PKHowToUseWalletSection : NSObject {
    NSURL *_localizationBundleURL;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *titleKey;
@property (readonly, nonatomic) PKHowToUseWalletRequirements *requirements;
@property (readonly, nonatomic) NSArray *cards;

+ (id)_sectionToPrioritize:(id)a0 otherSection:(id)a1;
+ (id)sectionsByPriority:(id)a0;

- (void).cxx_destruct;
- (id)localizationBundle;
- (id)cardsPassingTest:(id /* block */)a0;
- (BOOL)containsCardPassingTest:(id /* block */)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;

@end
