@class StoredCredential, NSString, NSArray, NSData, NSDate, StoredIdentifierRevocationList, StoredCryptoKey;

@interface StoredPayload : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *docType;
@property (nonatomic, copy) NSData *elementIdentifiersByNamespace;
@property (nonatomic) long long format;
@property (nonatomic, copy) NSData *ingestionHash;
@property (nonatomic, retain) NSArray *issuerCertificateChain;
@property (nonatomic, copy) NSString *issuingAuthority;
@property (nonatomic, copy) NSString *issuingJurisdiction;
@property (nonatomic, copy) NSData *payloadData;
@property (nonatomic) long long protectionType;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSDate *signedAt;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSDate *validFrom;
@property (nonatomic, copy) NSDate *validUntil;
@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic, retain) StoredIdentifierRevocationList *identifierRevocationList;
@property (nonatomic, retain) StoredCryptoKey *payloadProtectionKey;
@property (nonatomic, retain) StoredCryptoKey *presentmentKey;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
