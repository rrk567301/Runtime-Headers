@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (id)donatedMeCardEither;
- (void).cxx_destruct;
- (id)donatedMeCard;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)meCardDonations;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAdapter:(id)a0;
- (id)init;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (void)fetchDonatedMeCard:(id /* block */)a0;

@end
