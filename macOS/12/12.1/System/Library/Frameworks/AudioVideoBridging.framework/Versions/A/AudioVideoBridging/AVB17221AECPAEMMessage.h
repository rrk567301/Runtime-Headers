@class NSData;

@interface AVB17221AECPAEMMessage : AVB17221AECPMessage

@property unsigned short rawCommandType;
@property unsigned short commandType;
@property (getter=isUnsolicited) BOOL unsolicited;
@property (getter=isControllerRequest) BOOL controllerRequest;
@property (copy) NSData *commandSpecificData;

+ (id)responseMessage;
+ (id)commandMessage;
+ (id)errorForStatusCode:(unsigned char)a0;
+ (id)keyPathsForValuesAffectingCommandType;
+ (id)keyPathsForValuesAffectingUnsolicited;
+ (id)keyPathsForValuesAffectingControllerRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned short)commandType;
- (void)setCommandType:(unsigned short)a0;
- (void)setUnsolicited:(BOOL)a0;
- (void)setControllerRequest:(BOOL)a0;

@end
