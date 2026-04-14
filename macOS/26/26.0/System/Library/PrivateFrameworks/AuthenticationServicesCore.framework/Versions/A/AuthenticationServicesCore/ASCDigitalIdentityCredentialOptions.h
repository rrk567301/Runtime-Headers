@class NSString, NSData;

@interface ASCDigitalIdentityCredentialOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *origin;
@property (readonly, nonatomic) NSString *requestType;
@property (readonly, nonatomic) NSData *commandData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOrigin:(id)a0 requestType:(id)a1 commandData:(id)a2;

@end
