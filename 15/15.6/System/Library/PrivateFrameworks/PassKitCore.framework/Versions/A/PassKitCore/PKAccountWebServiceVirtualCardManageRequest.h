@class NSString, NSURL, PKVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardManageRequest : PKAccountWebServiceRequest <NSSecureCoding> {
    PKVirtualCardEncryptionFields *_encryptionFields;
    long long _action;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *virtualCardIdentifier;


- (void).cxx_destruct;
- (void)setAction:(long long)a0 withQueue:(id)a1 completion:(id /* block */)a2;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
