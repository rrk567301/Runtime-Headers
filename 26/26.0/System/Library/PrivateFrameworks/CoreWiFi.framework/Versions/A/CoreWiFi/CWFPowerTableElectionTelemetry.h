@class NSString, NSDateFormatter, NSDate;

@interface CWFPowerTableElectionTelemetry : NSObject {
    NSDateFormatter *_dateFormatter;
    NSDate *_handoffAvailableDate;
    NSString *_handoffWiFiAssetVersionInfo;
    NSString *_handoffBTAssetVersionInfo;
    NSString *_initialAssetFilename;
    NSString *_initialAssetVersionInfoVersion;
    NSDate *_initialAssetVersionInfoDate;
    unsigned char _readinessReply;
    NSDate *_readinessReplyDeliveredDate;
    NSDate *_electionStartNotificationDate;
    unsigned char _voteResult;
    NSDate *_voteDeliveredDate;
    NSString *_finalAssetVersionInfoVersion;
    NSDate *_finalAssetVersionInfoDate;
    unsigned char _wifiInitiatedPTUpdate;
    unsigned char _btInitiatedPTUpdate;
    NSString *_finalResultString;
}

+ (id)sharedObj;

- (id)init;
- (void).cxx_destruct;
- (void)setFinalResultAndSendTelemetry:(id)a0;
- (id)getNSDateFromString:(id)a0;
- (void)sendTelemetryAndClear;
- (void)setCandidatePowerTableVersionBluetooth:(id)a0;
- (void)setCandidatePowerTableVersionWiFi:(id)a0;
- (void)setCurrentPowerTableVersionAtReadiness:(id)a0 fileName:(id)a1;
- (void)setFinalPowerTableVersion:(id)a0;
- (void)setPowerTableReadiness:(BOOL)a0;
- (void)setPowerTableVote:(BOOL)a0;

@end
