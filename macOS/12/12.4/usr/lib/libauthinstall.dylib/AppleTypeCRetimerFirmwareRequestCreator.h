@class NSDictionary, NSData, ATCRTRestoreInfoFTABFile, ATCRTRestoreInfoFTABSubfile;

@interface AppleTypeCRetimerFirmwareRequestCreator : AppleTypeCRetimerRestoreInfoHelper {
    ATCRTRestoreInfoFTABFile *_ftab;
    ATCRTRestoreInfoFTABSubfile *_rkos;
    ATCRTRestoreInfoFTABSubfile *_rrko;
    unsigned char _tagNumber;
    unsigned short _chipID;
    unsigned short _boardID;
    unsigned char _securityEpoch;
    unsigned char _productionStatus;
    unsigned char _securityMode;
    unsigned char _securityDomain;
    unsigned long long _ecid;
    NSData *_nonce;
    unsigned char _chipRev;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (BOOL)parseOptions:(id)a0;
- (void)generateRequestDictionary;
- (id)generateHashForSubfile:(id)a0;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;

@end
