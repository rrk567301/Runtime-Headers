@class NSDictionary, NSString, NSFileProviderDomainVersion;

@interface FPExtensionResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (nonatomic) NSDictionary *domainUserInfo;
@property (nonatomic) int extensionPid;
@property (nonatomic) long long sequenceNumber;
@property (copy, nonatomic) NSString *callDescription;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
