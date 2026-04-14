@class NSString, NSSet;

@interface CKVIntentVocabularyDonation : NSObject

@property (readonly, nonatomic) NSString *appId;
@property (readonly, nonatomic) NSSet *vocabularySet;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)emptyDonationForApp:(id)a0;
+ (id)donationBuilderForApp:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppId:(id)a0 vocabularySet:(id)a1;

@end
