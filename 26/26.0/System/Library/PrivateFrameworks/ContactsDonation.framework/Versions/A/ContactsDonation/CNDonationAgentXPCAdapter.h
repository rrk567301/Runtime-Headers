@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 scope:(id)a1;
+ (void)donateMeCardValues:(id)a0 scope:(id)a1;
+ (id)newXPCConnection;
+ (void)changeFromAccount:(id)a0 toAccount:(id)a1 scope:(id)a2;
+ (void)removeAllRejectionsWithScope:(id)a0;
+ (void)rejectValueWithDonationIdentifier:(id)a0 scope:(id)a1;
+ (void)meCardDonationsWithScope:(id)a0;
+ (void)rejectValuesWithClusterIdentifier:(id)a0 scope:(id)a1;
+ (void)fetchDonatedMeCardWithScope:(id)a0;

- (id)rejectValuesWithClusterIdentifier:(id)a0;
- (id)removeDonatedMeCardValuesForIdentifiers:(id)a0;
- (id)rejectValueWithDonationIdentifier:(id)a0;
- (id)fetchDonatedMeCard;
- (id)removeAllRejections;
- (id)meCardDonations;
- (id)donateMeCardValues:(id)a0;
- (id)donatedMeCardEither;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;

@end
