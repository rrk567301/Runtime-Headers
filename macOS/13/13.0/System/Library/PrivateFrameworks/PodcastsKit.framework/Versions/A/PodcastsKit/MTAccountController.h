@class NSString, NSMutableSet, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface MTAccountController : MTSingleton <MTAccountControllerProtocol> {
    NSObject<OS_dispatch_queue> *_accountQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSMutableSet *inFlightAuthRequests;
@property (retain, nonatomic) NSMutableSet *declinedAuthRequests;
@property (retain, nonatomic) ACAccount *_activeAccount;
@property BOOL hasFetchedInitialAccount;
@property (retain, nonatomic) ACAccount *accountOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)iTunesAccountDidChangeForACAccountNotification:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)activeAccount;
- (id)primaryUser;
- (void)setActiveAccount:(id)a0;
- (void)didChangeStoreAccount:(id)a0;
- (BOOL)isPrimaryUserActiveAccount;
- (void)fetchActiveAccountWithCompletion:(id /* block */)a0;
- (id)activeDsid;
- (id)activeStorefront;
- (id)activeEmail;
- (id)activeFullName;
- (BOOL)isUserLoggedIn;
- (BOOL)activeAccountIsManagedAppleID;
- (id)_activeAccountBlocking;
- (void)_updateActiveAccount;

@end
