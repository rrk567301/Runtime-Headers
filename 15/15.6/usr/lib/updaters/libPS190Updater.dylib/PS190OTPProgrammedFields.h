@interface PS190OTPProgrammedFields : NSObject

@property (readonly) char certificateEpoch;
@property (readonly) char securityDomain;
@property (readonly) char productionStatus;
@property (readonly) char securityMode;
@property (readonly) char debugDisable;
@property (readonly) char realHDCPKeysPresent;
@property (readonly) char boardID;
@property (readonly) char ecid;

- (id)description;
- (id)initWithStatus1:(unsigned char)a0;

@end
