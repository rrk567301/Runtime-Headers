@class NSURL, NSString;

@interface PKCrossPlatformShareURL : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *expectedPairedReaderIdentifier;
@property (readonly, nonatomic) NSString *expectedProvisioningCredentialHash;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 expectedPairedReaderIdentifier:(id)a1 expectedProvisioningCredentialHash:(id)a2;
- (BOOL)isEqualToCrossPlatformShareURL:(id)a0;

@end
