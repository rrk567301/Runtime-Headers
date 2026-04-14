@class NSData, NEIKEv2AuthenticationProtocol;

@interface NEIKEv2AuthPayload : NEIKEv2Payload

@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authProtocol;
@property (readonly, nonatomic) unsigned long long method;
@property (retain, nonatomic) NSData *authenticationData;

+ (id)copyTypeDescription;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)hasRequiredFields;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData;

@end
