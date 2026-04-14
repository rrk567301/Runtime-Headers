@class NSString;

@interface HTTPAuthenticationRequest : NSObject {
    BOOL isBasic;
    BOOL isDigest;
    NSString *base64Credentials;
    NSString *username;
    NSString *realm;
    NSString *nonce;
    NSString *uri;
    NSString *qop;
    NSString *nc;
    NSString *cnonce;
    NSString *response;
}

- (id)uri;
- (id)response;
- (id)initWithRequest:(id)a0;
- (id)realm;
- (id)username;
- (void).cxx_destruct;
- (id)nonce;
- (BOOL)isBasic;
- (id)qop;
- (id)base64Credentials;
- (id)cnonce;
- (BOOL)isDigest;
- (id)nc;
- (id)nonquotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;
- (id)quotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;

@end
