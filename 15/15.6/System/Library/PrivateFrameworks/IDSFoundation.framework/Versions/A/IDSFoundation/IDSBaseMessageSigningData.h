@class NSData, NSNumber;

@interface IDSBaseMessageSigningData : NSObject

@property (readonly, nonatomic) NSData *sha256Digest;
@property (readonly, nonatomic) NSData *requestBody;
@property (readonly, nonatomic) NSNumber *serverTimestamp;
@property (readonly, nonatomic) char includeIcloudBAAHeaders;

- (void).cxx_destruct;
- (id)initWithSHA256Digest:(id)a0 requestBody:(id)a1 serverTimestamp:(id)a2 includeIcloudBAA:(char)a3;

@end
