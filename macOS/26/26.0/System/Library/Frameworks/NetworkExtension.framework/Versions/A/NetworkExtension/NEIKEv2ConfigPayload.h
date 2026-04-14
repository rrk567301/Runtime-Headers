@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ConfigPayload : NEIKEv2Payload {
    NEIKEv2ConfigurationMessage *_configuration;
}

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
