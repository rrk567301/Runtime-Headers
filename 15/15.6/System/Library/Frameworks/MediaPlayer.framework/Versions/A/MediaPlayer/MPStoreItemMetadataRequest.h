@class NSNumber, ICStorePlatformRequest, NSArray, ICUserIdentityStore, NSString, ICClientInfo, ICUserIdentity;

@interface MPStoreItemMetadataRequest : NSObject {
    char _requestNotificationsEnabled;
}

@property (copy, nonatomic) ICClientInfo *clientInfo;
@property (copy, nonatomic) ICUserIdentity *delegatedUserIdentity;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (retain, nonatomic) ICUserIdentityStore *userIdentityStore;
@property (readonly, copy, nonatomic) ICStorePlatformRequest *storePlatformRequest;
@property (retain, nonatomic) id requestContextTag;
@property (nonatomic) char allowLocalEquivalencies;
@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (copy, nonatomic) NSNumber *timeoutInterval;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) double retryDelay;
@property (nonatomic) char shouldIgnoreCache;
@property (nonatomic) char shouldIgnoreExpiration;
@property (nonatomic) char shouldRequireCachedResults;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, nonatomic, getter=isPersonalized) char personalized;
@property (nonatomic) long long personalizationStyle;

- (id)init;
- (void).cxx_destruct;
- (void)enableRequestNotifications;

@end
