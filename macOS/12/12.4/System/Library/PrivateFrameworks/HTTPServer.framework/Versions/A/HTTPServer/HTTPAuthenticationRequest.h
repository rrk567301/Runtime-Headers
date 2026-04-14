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

- (void).cxx_destruct;
- (id)nc;
- (id)uri;
- (id)response;
- (id)username;
- (id)realm;
- (id)nonce;
- (id)initWithRequest:(id)a0;
- (id)quotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;
- (id)nonquotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;
- (BOOL)isBasic;
- (BOOL)isDigest;
- (id)base64Credentials;
- (id)qop;
- (id)cnonce;

@end
