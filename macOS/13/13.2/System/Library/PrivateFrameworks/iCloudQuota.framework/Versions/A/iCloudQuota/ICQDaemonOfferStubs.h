@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;

+ (id)persistenceKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (void)setServerDictionary:(id)a0;
- (id)chooseStub;
- (id)chooseStubForConditions:(id)a0;
- (id)chooseFirstStub;
- (id)chooseBuddyStub;
- (id)chooseBuddyStubForConditions:(id)a0;
- (id)chooseDefaultStub;
- (id)chooseDefaultStubForConditions:(id)a0;
- (id)chooseFirstDefaultStub;
- (id)choosePremiumStub;
- (id)choosePremiumStubForConditions:(id)a0;
- (id)chooseFirstPremiumStub;
- (BOOL)containsOfferID:(id)a0;
- (id)sortedServerStubs:(id)a0;
- (void)_initServerStubsFromServerDictionary;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (BOOL)_stubsArrayContainsOfferID:(id)a0 stubs:(id)a1;
- (id)chooseStubForOfferType:(long long)a0;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;

@end
