@class AKURLBag, AKURLSession, AKFeatureManager;
@protocol AKAccountManagerProtocol;

@interface AKSimpleProfileManager : NSObject

@property (retain, nonatomic) id<AKAccountManagerProtocol> accountManager;
@property (retain, nonatomic) AKURLBag *urlBag;
@property (retain, nonatomic) AKURLSession *urlSession;
@property (retain, nonatomic) AKFeatureManager *featureManager;

- (void).cxx_destruct;
- (BOOL)canCreateSimpleProfilesForAccount:(id)a0;
- (id)init;
- (void)profileImageURLsWithCompletion:(id /* block */)a0;
- (id)simpleProfilesForPrimaryAccount;
- (void)_sendNotificationForProfilesDidChange;
- (BOOL)_setProfiles:(id)a0 forAccount:(id)a1;
- (BOOL)account:(id)a0 isSponsorForProfile:(id)a1;
- (id)authContextWithSponsor:(id)a0 simpleProfileContext:(id)a1;
- (void)fetchUpgradeURLForSponsor:(id)a0 forSimpleProfile:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccountManager:(id)a0 urlBag:(id)a1 urlSession:(id)a2 featureManager:(id)a3;
- (void)isQRCodeEnabledWithCompletion:(id /* block */)a0;
- (BOOL)primaryAccountIsSponsorForProfile:(id)a0;
- (void)profileImagesDataWithCompletion:(id /* block */)a0;
- (void)profileImagesWithCompletion:(id /* block */)a0;
- (id)simpleProfilesForAccount:(id)a0;
- (id)sortedProfilesFromArray:(id)a0;

@end
