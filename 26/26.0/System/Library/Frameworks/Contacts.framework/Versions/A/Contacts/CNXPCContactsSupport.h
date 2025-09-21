@class NSString, CNXPCConnection;
@protocol CNXPCContactsSupportService, CNContactsLogger;

@interface CNXPCContactsSupport : NSObject <CNXPCContactsSupportProtocol>

@property (readonly, nonatomic) CNXPCConnection *serviceConnection;
@property (readonly, nonatomic) id<CNXPCContactsSupportService> serviceProxy;
@property (readonly, nonatomic) id<CNContactsLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocolInterface;
+ (id)os_log;

- (id)initWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)favoritesEntriesWithError:(id *)a0;
- (BOOL)reindexSearchableItemsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)requestProviderDomainCommand:(id)a0 error:(id *)a1;
- (void)sendCommLimitsQuestionForHandles:(id)a0 withReply:(id /* block */)a1;
- (BOOL)setFavoritesEntries:(id)a0 error:(id *)a1;
- (id)verifyIndexWithError:(id *)a0;

@end
