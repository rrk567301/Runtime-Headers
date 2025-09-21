@class NSXPCListenerEndpoint, NSString, NSDictionary, NSData, DCPresentmentResponseEncryptionParameters;

@interface DCPresentmentSelection : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_credentialIdentifier;
    NSDictionary *_elementsToPresent;
    NSData *_authData;
    NSXPCListenerEndpoint *_seAccessEndpoint;
    NSDictionary *_deviceNamespaces;
    DCPresentmentResponseEncryptionParameters *_responseEncryptionParameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSDictionary *elementsToPresent;
@property (retain, nonatomic) NSData *authData;
@property (retain, nonatomic) NSXPCListenerEndpoint *seAccessEndpoint;
@property (retain, nonatomic) NSDictionary *deviceNamespaces;
@property (copy, nonatomic) DCPresentmentResponseEncryptionParameters *responseEncryptionParameters;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithElementsToPresent:(id)a0;
- (id)initWithCredentialIdentifier:(id)a0 elementsToPresent:(id)a1 authData:(id)a2 seAccessEndpoint:(id)a3;
- (id)initWithCredentialIdentifier:(id)a0 elementsToPresent:(id)a1 authData:(id)a2 seAccessEndpoint:(id)a3 deviceNamespaces:(id)a4;

@end
