@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newXPCConnection;
+ (void)donateMeCardValues:(id)a0 scope:(id)a1;
+ (void)meCardDonationsWithScope:(id)a0;
+ (void)rejectValuesWithClusterIdentifier:(id)a0 scope:(id)a1;
+ (void)rejectValueWithDonationIdentifier:(id)a0 scope:(id)a1;
+ (void)fetchDonatedMeCardWithScope:(id)a0;
+ (void)changeFromAccount:(id)a0 toAccount:(id)a1 scope:(id)a2;
+ (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 scope:(id)a1;
+ (void)removeAllRejectionsWithScope:(id)a0;

- (id)removeDonatedMeCardValuesForIdentifiers:(id)a0;
- (id)donatedMeCardEither;
- (id)removeAllRejections;
- (id)fetchDonatedMeCard;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (id)rejectValueWithDonationIdentifier:(id)a0;
- (id)meCardDonations;
- (id)rejectValuesWithClusterIdentifier:(id)a0;
- (id)donateMeCardValues:(id)a0;

@end
