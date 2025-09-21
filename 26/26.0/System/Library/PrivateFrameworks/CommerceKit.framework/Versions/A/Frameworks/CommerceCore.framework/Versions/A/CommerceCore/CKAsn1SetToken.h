@class NSData;

@interface CKAsn1SetToken : CKAsn1Token {
    NSData *mReadData;
}

- (void)reset;
- (id)description;
- (void).cxx_destruct;
- (id)nextToken;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 data:(id)a2 opaque:(BOOL)a3;

@end
