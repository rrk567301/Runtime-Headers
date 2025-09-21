@class NSData, NSString;

@interface ASCDigitalIdentityCredential : NSObject <ASCCredentialProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *commandResponseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCommandResponseData:(id)a0;

@end
