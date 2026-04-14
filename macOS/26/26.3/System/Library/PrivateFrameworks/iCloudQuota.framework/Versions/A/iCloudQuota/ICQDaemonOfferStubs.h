@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;
@property (readonly, nonatomic) NSArray *eventStubs;

+ (id)persistenceKey;

- (id)chooseStub;
- (void)setServerDictionary:(id)a0;
- (id)chooseBuddyStubForConditions:(id)a0;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)chooseStubForConditions:(id)a0;
- (id)choosePremiumStub;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)chooseDefaultStubForConditions:(id)a0;
- (id)chooseFirstStub;
- (id)chooseFirstEventStub;
- (id)chooseBuddyStub;
- (id)sortedServerStubs:(id)a0;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;
- (void).cxx_destruct;
- (id)chooseStubForOfferType:(long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)chooseEventStub;
- (id)chooseFirstDefaultStub;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (BOOL)_stubsArrayContainsOfferID:(id)a0 stubs:(id)a1;
- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (void)_initServerStubsFromServerDictionary;
- (id)chooseEventStubForConditions:(id)a0;
- (id)chooseDefaultStub;
- (BOOL)containsOfferID:(id)a0;
- (id)chooseFirstPremiumStub;
- (id)choosePremiumStubForConditions:(id)a0;

@end
