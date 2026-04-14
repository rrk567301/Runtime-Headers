@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;
@property (readonly, nonatomic) NSArray *eventStubs;

+ (id)persistenceKey;

- (id)sortedServerStubs:(id)a0;
- (id)chooseEventStub;
- (id)chooseFirstStub;
- (id)chooseStubForOfferType:(long long)a0;
- (id)chooseDefaultStubForConditions:(id)a0;
- (id)chooseEventStubForConditions:(id)a0;
- (id)chooseBuddyStub;
- (BOOL)_stubsArrayContainsOfferID:(id)a0 stubs:(id)a1;
- (id)chooseFirstPremiumStub;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)chooseBuddyStubForConditions:(id)a0;
- (void)setServerDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_initServerStubsFromServerDictionary;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)chooseFirstEventStub;
- (id)choosePremiumStubForConditions:(id)a0;
- (id)chooseFirstDefaultStub;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (id)chooseStubForConditions:(id)a0;
- (id)chooseStub;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (id)initWithDictionary:(id)a0;
- (BOOL)containsOfferID:(id)a0;
- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (id)choosePremiumStub;
- (id)chooseDefaultStub;

@end
