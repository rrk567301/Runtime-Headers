@class NSString, NSData, NSArray;

@interface NEIKEv2Payload : NSObject <NEPrettyDescription> {
    BOOL _isInbound;
    NSData *_payloadSubHeader;
    NSArray *_payloadDataVector;
}

@property (readonly, nonatomic) BOOL hasRequiredFields;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *typeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)generatePayloadData;
- (BOOL)parsePayloadData:(id)a0;

@end
