@class NSString;

@interface B2PSerialNumberGetResponse : B2PResponse

@property (readonly) NSString *serialNumber;

- (id)description;
- (void).cxx_destruct;
- (char)parseResponse:(id)a0;

@end
