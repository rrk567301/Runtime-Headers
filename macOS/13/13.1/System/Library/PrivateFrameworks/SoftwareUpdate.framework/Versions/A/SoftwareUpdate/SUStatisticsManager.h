@class NSObject;
@protocol OS_dispatch_queue;

@interface SUStatisticsManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)reportDataToRTC:(id)a0;
- (void)reportDownloadDataToRTC:(id)a0 cancelled:(BOOL)a1 product:(id)a2 timeElapsed:(double)a3 foreground:(BOOL)a4;
- (void)reportNotificationResponseDataToRTC:(id)a0 ofType:(id)a1 additionalInfo:(id)a2;
- (void)reportSettingsActionToRTCWithClickedButton:(id)a0 currentUpdates:(id)a1 additionalInfo:(id)a2;
- (void)reportDoItLaterToRTC:(id)a0;
- (void)reportScanDataToRTCWithURL:(id)a0 background:(BOOL)a1 timeElapsedSinceLastScan:(double)a2 resultCode:(long long)a3;
- (void)reportInstallDataToRTC:(id)a0 product:(id)a1;
- (void)reportOSUpdateInstallDataToRTC:(id)a0 options:(id)a1;
- (void)reportInstallRestartInformationWithResult:(int)a0 withAdditionalInfo:(id)a1;
- (void)reportGeneralSplatInstallationInformation:(id)a0;
- (void)reportSplatRevokedDataToRTCWithReason:(id)a0 responsibleProcesses:(id)a1 options:(id)a2;
- (void)reportPreferences;
- (unsigned short)_retrieveCategoryType:(id)a0;
- (id)_createPayloadForRTC:(id)a0;
- (void)_reportPreferencesDataToCoreAnalytics;
- (BOOL)_supportsBootPolicy;
- (id)_bootPolicySecurityMode;
- (id)_bootPolicyValueForBooleanTag:(unsigned int)a0;
- (id)_bootPolicyIntegerTagExists:(unsigned int)a0;
- (id)_bootPolicyDigestTagExists:(unsigned int)a0;
- (void)_reportPreferencesDataToRTC;
- (unsigned char)_byteForNVRAMKey:(id)a0 namespace:(id)a1;

@end
