@class NSString, NSMutableSet, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface MTAccountController : MTSingleton <MTAccountControllerProtocol> {
    NSObject<OS_dispatch_queue> *_accountQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSMutableSet *inFlightAuthRequests;
@property (retain, nonatomic) NSMutableSet *declinedAuthRequests;
@property (retain, nonatomic) ACAccount *_activeAccount;
@property char hasFetchedInitialAccount;
@property (retain, nonatomic) ACAccount *accountOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)iTunesAccountDidChangeForACAccountNotification:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)activeAccount;
- (id)primaryUser;
- (id)activeDsid;
- (void)setActiveAccount:(id)a0;
- (id)_activeAccountBlocking;
- (void)_updateActiveAccount;
- (char)activeAccountIsManagedAppleID;
- (id)activeEmail;
- (id)activeFullName;
- (id)activeStorefront;
- (void)didChangeStoreAccount:(id)a0;
- (void)fetchActiveAccountWithCompletion:(id /* block */)a0;
- (char)isPrimaryUserActiveAccount;
- (char)isUserLoggedIn;

@end
