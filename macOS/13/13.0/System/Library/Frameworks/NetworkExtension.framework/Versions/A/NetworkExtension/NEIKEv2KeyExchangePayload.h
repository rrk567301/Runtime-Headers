@class NSData, NEIKEv2DHProtocol;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload {
    NEIKEv2DHProtocol *_dh;
    NSData *_dhPublicKey;
}

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
