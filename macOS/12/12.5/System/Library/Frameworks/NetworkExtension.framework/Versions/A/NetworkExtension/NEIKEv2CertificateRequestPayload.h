@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload

@property unsigned long long encoding;
@property (retain) NSData *certificateData;

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
