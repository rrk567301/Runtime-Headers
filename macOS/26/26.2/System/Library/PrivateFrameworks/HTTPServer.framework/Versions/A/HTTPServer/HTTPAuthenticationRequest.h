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

- (id)realm;
- (id)uri;
- (id)initWithRequest:(id)a0;
- (id)username;
- (id)response;
- (id)nonce;
- (void).cxx_destruct;
- (BOOL)isBasic;
- (id)qop;
- (id)base64Credentials;
- (id)cnonce;
- (BOOL)isDigest;
- (id)nc;
- (id)nonquotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;
- (id)quotedSubHeaderFieldValue:(id)a0 fromHeaderFieldValue:(id)a1;

@end
