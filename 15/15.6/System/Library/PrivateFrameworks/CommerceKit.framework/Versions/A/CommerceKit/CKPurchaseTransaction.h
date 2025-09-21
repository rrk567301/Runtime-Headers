@class NSString, NSDictionary, CKStoreClient, CKPurchaseResponse, NSError;

@interface CKPurchaseTransaction : NSObject <NSSecureCoding> {
    NSString *_purchaseQueueIdentifier;
    char _usePasswordFallback;
    NSString *_challenge;
    NSString *_signature;
    NSString *_publicKey;
    NSString *_originatingStorefront;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *purchaseQueueIdentifier;
@property unsigned char state;
@property char authedToBuy;
@property (copy) NSDictionary *buyParameters;
@property (retain) CKStoreClient *storeClient;
@property (copy) NSString *originatingStorefront;
@property (retain) CKPurchaseResponse *response;
@property (retain) NSError *error;
@property char usePasswordFallback;
@property (retain) NSString *challenge;
@property (retain) NSString *signature;
@property (retain) NSString *publicKey;
@property (readonly) id transactionIdentifier;
@property (readonly) id groupIdentifier;
@property (readonly) CKStoreClient *storeClient;
@property (readonly) NSDictionary *buyParameters;
@property (readonly) NSString *bagURLKey;
@property (readonly) NSString *forcedUsername;
@property (readonly) char authedToBuy;
@property (readonly) unsigned char state;
@property (readonly) CKPurchaseResponse *response;
@property (readonly) NSError *error;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithGroupIdentifier:(id)a0;
- (id)_initWithPurchase:(id)a0 groupIdentifier:(id)a1;

@end
