@class NSData, NEIKEv2SPI;

@interface NEIKEv2NotifyPayload : NEIKEv2Payload {
    unsigned long long _notifyType;
    NSData *_data;
    NEIKEv2SPI *_spi;
}

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)typeDescription;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData:(id)a0;

@end
