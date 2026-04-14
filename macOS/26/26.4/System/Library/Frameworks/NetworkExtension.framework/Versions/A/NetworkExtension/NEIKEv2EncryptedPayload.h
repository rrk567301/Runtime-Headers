@class NSData;

@interface NEIKEv2EncryptedPayload : NEIKEv2Payload {
    NSData *_authenticatedHeaders;
    NSData *_payloadData;
    unsigned long long _nextPayload;
}

@property (readonly, nonatomic) BOOL isFragment;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)typeDescription;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
