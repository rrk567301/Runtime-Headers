@class NSData;

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload {
    NSData *_authenticatedHeaders;
    NSData *_payloadData;
    unsigned long long _nextPayload;
}

@property (readonly, nonatomic) BOOL isFragment;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
