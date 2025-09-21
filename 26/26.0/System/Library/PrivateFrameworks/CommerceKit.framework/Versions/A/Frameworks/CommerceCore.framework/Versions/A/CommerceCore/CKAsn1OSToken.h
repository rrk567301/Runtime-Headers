@class CKAsn1Token;

@interface CKAsn1OSToken : CKAsn1Token

@property (readonly) CKAsn1Token *value;

- (id)stringValue;
- (void).cxx_destruct;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 data:(id)a2 opaque:(BOOL)a3;

@end
