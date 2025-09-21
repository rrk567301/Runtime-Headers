@class NSString, NSDictionary, NSData, NSNumber;

@interface PS190HardwareID : NSObject {
    NSString *_authlistFormattedECID;
}

@property (readonly) NSNumber *boardID;
@property (readonly) unsigned int certificateEpoch;
@property (readonly) unsigned int chipID;
@property (readonly) char debugDisable;
@property (readonly) unsigned long long ecid;
@property (readonly) NSData *nonce;
@property (readonly) NSNumber *productionMode;
@property (readonly) char realHDCPKeysPresent;
@property (readonly) NSNumber *securityDomain;
@property (readonly) char securityMode;
@property (readonly) NSString *hardwareRevision;
@property (readonly) char requiresPersonalization;
@property (readonly) char needsOTPProgramming;
@property (readonly) NSDictionary *dictionary;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBoardID:(id)a0 certficateEpoch:(unsigned int)a1 chipID:(unsigned int)a2 debugDisable:(char)a3 ecid:(unsigned long long)a4 nonce:(id)a5 productionMode:(id)a6 realHDCPKeysPresent:(char)a7 securityDomain:(id)a8 securityMode:(char)a9 hardwareRevision:(id)a10;

@end
