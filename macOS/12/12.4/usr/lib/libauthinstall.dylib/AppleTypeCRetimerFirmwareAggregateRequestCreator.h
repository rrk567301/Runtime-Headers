@class NSArray, NSDictionary, ATCRTRestoreInfoFTABFile, ATCRTRestoreInfoFTABSubfile;

@interface AppleTypeCRetimerFirmwareAggregateRequestCreator : AppleTypeCRetimerRestoreInfoHelper {
    ATCRTRestoreInfoFTABFile *_ftab;
    ATCRTRestoreInfoFTABSubfile *_rkos;
    ATCRTRestoreInfoFTABSubfile *_rrko;
    NSArray *_deviceInfoArray;
    NSDictionary *_apParameters;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (BOOL)parseOptions:(id)a0;
- (BOOL)generateRequestDictionary;
- (id)generateHashForSubfile:(id)a0;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;

@end
