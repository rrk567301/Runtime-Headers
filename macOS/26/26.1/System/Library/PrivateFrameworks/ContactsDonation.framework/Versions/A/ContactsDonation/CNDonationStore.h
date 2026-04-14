@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (id)donatedMeCard;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (id)donatedMeCardEither;
- (id)initWithAdapter:(id)a0;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDonatedMeCard:(id /* block */)a0;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)meCardDonations;
- (void).cxx_destruct;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;

@end
