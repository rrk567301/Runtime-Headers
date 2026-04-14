@class NSData;

@interface KVACIssuance : NSObject

@property (readonly, retain, nonatomic) NSData *keyId;
@property (readonly, retain, nonatomic) NSData *issuanceData;

- (void).cxx_destruct;
- (id)initWithIssuance:(id)a0;

@end
