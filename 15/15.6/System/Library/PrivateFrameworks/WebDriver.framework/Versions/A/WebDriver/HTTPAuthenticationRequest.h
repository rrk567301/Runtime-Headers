@class NSString;

@interface HTTPAuthenticationRequest : NSObject {
    char isBasic;
    char isDigest;
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

- (void).cxx_destruct;
- (id)response;
- (id)nonce;
- (id)realm;
- (id)username;
- (id)initWithRequest:(id)a0;
- (id)uri;
- (char)isBasic;
- (id)qop;
- (id)base64Credentials;
- (id)cnonce;
- (char)isDigest;
- (id)nc;
- (id)nonquotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;
- (id)quotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;

@end
