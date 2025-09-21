@class MSOID, NSData, NSArray;
@protocol MSCMSMessage;

@interface MSCMSAuthEnvelopedData : NSObject <MSCMSMessage> {
    void /* function */ dataContent;
    void /* function */ recipients;
    void /* function */ protectedAttributes;
    void /* function */ unprotectedAttributes;
    void /* function */ originatorCertificates;
    void /* unknown type, empty encoding */ encryptedContent;
}

@property (nonatomic, retain) MSOID *type;
@property (nonatomic, copy) NSData *dataContent;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, retain) MSOID *encryptionAlgorithm;
@property (nonatomic, copy) NSArray *protectedAttributes;
@property (nonatomic, copy) NSArray *unprotectedAttributes;
@property (nonatomic, copy) NSArray *originatorCertificates;
@property (nonatomic, retain) MSOID *contentType;
@property (nonatomic, retain) id<MSCMSMessage> embeddedContent;

+ (id)decodeMessageSecurityObject:(id)a0 options:(id)a1 error:(id *)a2;

- (void)addRecipient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addProtectedAttribute:(id)a0;
- (id)encodeMessageSecurityObject:(id *)a0;
- (id)initWithDataContent:(id)a0 recipient:(id)a1;
- (void)addUnprotectedAttribute:(id)a0;
- (id)getAttributesWithOID:(id)a0;
- (id)initWithDataContent:(id)a0 recipient:(id)a1 encryptionAlgorithm:(id)a2;
- (id)initWithEmbeddedContent:(id)a0 recipient:(id)a1;
- (id)initWithEmbeddedContent:(id)a0 recipient:(id)a1 encryptionAlgorithm:(id)a2;
- (id)initWithEncryptionAlgorithm:(id)a0;
- (void)setContentTypeWithType:(id)a0;

@end
