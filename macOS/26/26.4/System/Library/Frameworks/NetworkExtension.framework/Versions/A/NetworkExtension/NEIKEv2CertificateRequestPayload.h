@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload {
    unsigned long long _encoding;
    NSData *_certificateData;
}

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
