@class NSString, NSDictionary, NSData, ISO18013TerminalAuthInfo;

@interface STSISO18013CredRequest : STSCredentialRequest <NSSecureCoding> {
    NSDictionary *_requestByNamespace;
    NSData *_authACL;
    ISO18013TerminalAuthInfo *_readerAuthInfo;
    NSString *_docType;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
