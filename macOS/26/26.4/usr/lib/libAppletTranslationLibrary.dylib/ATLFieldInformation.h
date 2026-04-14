@class NSData;

@interface ATLFieldInformation : NSObject

@property (readonly) unsigned short fieldProperties;
@property (readonly) NSData *ecpPayload;
@property (readonly) unsigned short typeFSystemCode;

- (void).cxx_destruct;
- (id)initWithFieldProperties:(unsigned short)a0 ecpPayload:(id)a1 typeFSystemCode:(unsigned short)a2;

@end
