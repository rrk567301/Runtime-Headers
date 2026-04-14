@interface CRUtils : NSObject

+ (BOOL)foundInMultiRequestError:(id)a0 dataClass:(id)a1 dataInstance:(id)a2;
+ (id)getInnermostNSError:(id)a0;
+ (int)getInnermostNSErrorCode:(id)a0;

- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)isHorizonRamdiskBootInApticket:(id)a0;
- (id)base64Preprocess:(id)a0;
- (id)convertDataToHexInDictionary:(id)a0;
- (id)getAPTicket;
- (id)getPathForApTicketWithError:(id *)a0;
- (id)getPathForAriesFirmwareWithError:(id *)a0;
- (id)getPathForBorsFirmwareWithError:(id *)a0;
- (id)getPathForBrunorFirmwareWithError:(id *)a0;
- (id)getPathForSavageFirmwareWithError:(id *)a0;
- (id)getPathForYonkersFirmwareWithError:(id *)a0;
- (BOOL)hasEntitlementAATC;
- (BOOL)hasEntitlementBoolForTag:(unsigned int)a0 inAPTicket:(id)a1;

@end
