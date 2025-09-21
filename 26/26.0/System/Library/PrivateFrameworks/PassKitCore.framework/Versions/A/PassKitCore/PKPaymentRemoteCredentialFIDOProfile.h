@class NSString, NSData;

@interface PKPaymentRemoteCredentialFIDOProfile : NSObject

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSString *accountHash;
@property (readonly, copy, nonatomic) NSData *keyHash;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
