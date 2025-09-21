@class NSData;

@interface AVB17221AECPAppleAEMExtensionMessage : AVB17221AECPVendorMessage

@property unsigned short commandType;
@property (getter=isUnsolicited) char unsolicited;
@property (getter=isControllerRequest) char controllerRequest;
@property (copy) NSData *commandSpecificData;

+ (id)responseMessage;
+ (id)commandMessage;
+ (id)commandMessageForCommandType:(unsigned short)a0;
+ (id)commandMessageForProtocolSpecificData:(id)a0;
+ (id)errorForStatusCode:(unsigned char)a0;
+ (id)keyPathsForValuesAffectingCommandSpecificData;
+ (id)keyPathsForValuesAffectingCommandType;
+ (id)keyPathsForValuesAffectingControllerRequest;
+ (id)keyPathsForValuesAffectingUnsolicited;
+ (id)responseMessageForCommandMessage:(id)a0;
+ (id)responseMessageForCommandType:(unsigned short)a0;
+ (id)responseMessageForProtocolSpecificData:(id)a0;

- (id)init;
- (unsigned short)commandType;
- (void)setCommandType:(unsigned short)a0;
- (void)setUnsolicited:(char)a0;
- (void)_makeItMutableWithMinimumSize:(unsigned long long)a0;
- (id)commandSpecificData;
- (void)setCommandSpecificData:(id)a0;
- (void)setControllerRequest:(char)a0;

@end
