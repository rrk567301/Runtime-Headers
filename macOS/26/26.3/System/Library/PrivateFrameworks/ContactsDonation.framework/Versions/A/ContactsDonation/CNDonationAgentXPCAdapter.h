@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newXPCConnection;
+ (void)rejectValueWithDonationIdentifier:(id)a0 scope:(id)a1;
+ (void)meCardDonationsWithScope:(id)a0;
+ (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 scope:(id)a1;
+ (void)donateMeCardValues:(id)a0 scope:(id)a1;
+ (void)removeAllRejectionsWithScope:(id)a0;
+ (void)changeFromAccount:(id)a0 toAccount:(id)a1 scope:(id)a2;
+ (void)fetchDonatedMeCardWithScope:(id)a0;
+ (void)rejectValuesWithClusterIdentifier:(id)a0 scope:(id)a1;

- (id)meCardDonations;
- (id)removeDonatedMeCardValuesForIdentifiers:(id)a0;
- (id)fetchDonatedMeCard;
- (id)donatedMeCardEither;
- (id)removeAllRejections;
- (id)donateMeCardValues:(id)a0;
- (id)rejectValuesWithClusterIdentifier:(id)a0;
- (id)rejectValueWithDonationIdentifier:(id)a0;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;

@end
