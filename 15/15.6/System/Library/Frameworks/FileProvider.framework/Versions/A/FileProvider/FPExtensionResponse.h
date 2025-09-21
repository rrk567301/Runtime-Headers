@class NSDictionary, NSString, NSFileProviderDomainVersion;

@interface FPExtensionResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (retain, nonatomic) NSDictionary *domainUserInfo;
@property (nonatomic) int extensionPid;
@property (nonatomic) long long sequenceNumber;
@property (copy, nonatomic) NSString *callDescription;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
