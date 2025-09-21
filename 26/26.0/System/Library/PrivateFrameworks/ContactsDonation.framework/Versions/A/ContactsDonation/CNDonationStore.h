@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDonatedMeCard:(id /* block */)a0;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAdapter:(id)a0;
- (id)meCardDonations;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (id)donatedMeCard;
- (id)donatedMeCardEither;
- (void).cxx_destruct;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;

@end
