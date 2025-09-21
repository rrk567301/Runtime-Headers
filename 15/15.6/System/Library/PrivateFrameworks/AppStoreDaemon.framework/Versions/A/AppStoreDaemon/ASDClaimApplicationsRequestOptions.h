@class NSArray, NSDictionary, NSData, NSNumber;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSNumber *accountID;
@property (copy, nonatomic) NSData *clientAuditTokenData;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) long long claimStyle;
@property (nonatomic) char establishesActiveAccount;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (nonatomic) char ignoresPreviousClaimAttempts;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (nonatomic) char suppressErrorDialogs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifiers:(id)a0;
- (id)initWithClaimStyle:(long long)a0;

@end
