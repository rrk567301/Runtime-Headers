@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *dataToSign;
@property (nonatomic) char useSCRT;
@property (nonatomic) long long validityInMinutes;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;

@end
