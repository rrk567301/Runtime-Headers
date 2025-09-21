@class NSString, NSUUID, NSURL;

@interface WBSAutoFillEvent : NSObject

@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSUUID *tabID;
@property (nonatomic) char isPrivateTab;
@property (readonly, nonatomic) NSString *domain;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) unsigned long long machTimestamp;
@property (readonly, nonatomic) unsigned long long timeIntervalSinceTimestamp;
@property (copy, nonatomic) NSString *providerBundleIdentifier;
@property (readonly, nonatomic) char isExternalCredentialProviderEvent;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 tabID:(id)a1 isPrivateTab:(char)a2 url:(id)a3 providerBundleIdentifier:(id)a4;

@end
