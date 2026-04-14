@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newXPCConnection;
+ (void)changeFromAccount:(id)a0 toAccount:(id)a1 scope:(id)a2;
+ (void)rejectValueWithDonationIdentifier:(id)a0 scope:(id)a1;
+ (void)donateMeCardValues:(id)a0 scope:(id)a1;
+ (void)fetchDonatedMeCardWithScope:(id)a0;
+ (void)meCardDonationsWithScope:(id)a0;
+ (void)removeAllRejectionsWithScope:(id)a0;
+ (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 scope:(id)a1;
+ (void)rejectValuesWithClusterIdentifier:(id)a0 scope:(id)a1;

- (id)donatedMeCardEither;
- (id)fetchDonatedMeCard;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (id)removeAllRejections;
- (id)rejectValueWithDonationIdentifier:(id)a0;
- (id)donateMeCardValues:(id)a0;
- (id)rejectValuesWithClusterIdentifier:(id)a0;
- (id)meCardDonations;
- (id)removeDonatedMeCardValuesForIdentifiers:(id)a0;

@end
