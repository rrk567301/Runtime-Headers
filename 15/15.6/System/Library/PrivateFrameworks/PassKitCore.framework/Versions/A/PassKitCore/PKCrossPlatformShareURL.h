@class NSURL, NSString;

@interface PKCrossPlatformShareURL : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *expectedPairedReaderIdentifier;
@property (readonly, nonatomic) NSString *expectedProvisioningCredentialHash;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCrossPlatformShareURL:(id)a0;
- (id)initWithURL:(id)a0 expectedPairedReaderIdentifier:(id)a1 expectedProvisioningCredentialHash:(id)a2;

@end
