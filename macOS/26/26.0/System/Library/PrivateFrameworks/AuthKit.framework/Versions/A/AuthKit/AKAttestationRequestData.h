@class AKClient, NSURL, NSData, NSDictionary;

@interface AKAttestationRequestData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKClient *client;
@property (readonly, nonatomic) NSURL *requestURL;
@property (readonly, nonatomic) NSData *signingDataHash;
@property (readonly, nonatomic) NSDictionary *headers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 requiredHeaders:(id)a1;
- (id)initWithRequestURL:(id)a0 signingDataHash:(id)a1 requiredHeaders:(id)a2;
- (id)initWithSigningData:(id)a0 requiredHeaders:(id)a1;

@end
