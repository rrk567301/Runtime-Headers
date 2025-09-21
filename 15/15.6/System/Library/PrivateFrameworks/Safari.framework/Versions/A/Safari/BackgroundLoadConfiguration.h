@class NSString, SafariWebExtension;

@interface BackgroundLoadConfiguration : NSObject

@property (copy, nonatomic) NSString *httpReferrer;
@property (nonatomic) char allowAccessToKeychain;
@property (nonatomic) char allowRemoteInspection;
@property (nonatomic) char includeToolbars;
@property (nonatomic) char cancelExistingLoadsWithSameURL;
@property (nonatomic) long long copySessionState;
@property (nonatomic) char setUpParentTabBackItem;
@property (nonatomic) char canAttemptUpgradingRequestURLToHTTPS;
@property (retain, nonatomic) SafariWebExtension *webExtension;

- (void).cxx_destruct;

@end
