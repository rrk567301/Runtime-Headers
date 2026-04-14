@class NSString;

@interface MAAutoAssetSuspendResumeForSoftwareUpdateStatusRequestInfo : MAAutoAssetSuspendResumeForSoftwareUpdateRequestInfo

@property (readonly, nonatomic) NSString *clientDomainName;
@property (readonly, nonatomic) NSString *assetSetIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithClientDomainName:(id)a0 assetSetIdentifier:(id)a1;

@end
