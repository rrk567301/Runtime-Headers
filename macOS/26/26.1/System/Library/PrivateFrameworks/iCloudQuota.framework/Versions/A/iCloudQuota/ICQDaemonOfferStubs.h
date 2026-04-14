@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;
@property (readonly, nonatomic) NSArray *eventStubs;

+ (id)persistenceKey;

- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (id)chooseFirstStub;
- (id)chooseFirstPremiumStub;
- (id)sortedServerStubs:(id)a0;
- (id)chooseStubForOfferType:(long long)a0;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)chooseFirstDefaultStub;
- (id)chooseEventStubForConditions:(id)a0;
- (BOOL)containsOfferID:(id)a0;
- (id)chooseDefaultStub;
- (id)choosePremiumStubForConditions:(id)a0;
- (void)_initServerStubsFromServerDictionary;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (id)chooseEventStub;
- (void)setServerDictionary:(id)a0;
- (id)chooseBuddyStubForConditions:(id)a0;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)chooseStubForConditions:(id)a0;
- (id)chooseBuddyStub;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)choosePremiumStub;
- (id)chooseDefaultStubForConditions:(id)a0;
- (BOOL)_stubsArrayContainsOfferID:(id)a0 stubs:(id)a1;
- (id)chooseFirstEventStub;
- (id)chooseStub;

@end
