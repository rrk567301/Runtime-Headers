@class FTABSubfileBackDeploy, NSArray, NSDictionary, FTABFileBackDeploy;

@interface AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy : AppleTypeCRetimerRestoreInfoHelperBackDeploy {
    FTABFileBackDeploy *_ftab;
    FTABSubfileBackDeploy *_rkos;
    FTABSubfileBackDeploy *_rrko;
    NSArray *_deviceInfoArray;
    NSDictionary *_apParameters;
}

@property (readonly) NSDictionary *requestDictionary;

- (void).cxx_destruct;
- (id)generateHashForSubfile:(id)a0;
- (BOOL)generateRequestDictionary;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)parseOptions:(id)a0;

@end
