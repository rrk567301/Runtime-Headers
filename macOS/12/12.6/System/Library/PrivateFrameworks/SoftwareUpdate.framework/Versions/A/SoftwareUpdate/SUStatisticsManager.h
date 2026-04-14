@class NSObject;
@protocol OS_dispatch_queue;

@interface SUStatisticsManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)reportPreferences;
- (void)reportScanDataToRTCWithURL:(id)a0 background:(BOOL)a1 timeElapsedSinceLastScan:(double)a2 resultCode:(long long)a3;
- (void)reportDownloadDataToRTC:(id)a0 cancelled:(BOOL)a1 product:(id)a2 timeElapsed:(double)a3 foreground:(BOOL)a4;
- (void)reportInstallDataToRTC:(id)a0 product:(id)a1;
- (id)_createPayloadForRTC:(id)a0;
- (unsigned short)_retrieveCategoryType:(id)a0;
- (void)reportDataToRTC:(id)a0;
- (void)_reportPreferencesDataToCoreAnalytics;
- (void)_reportPreferencesDataToRTC;
- (unsigned char)_byteForNVRAMKey:(id)a0 namespace:(id)a1;
- (BOOL)_supportsBootPolicy;
- (id)_bootPolicySecurityMode;
- (id)_bootPolicyValueForBooleanTag:(unsigned int)a0;
- (id)_bootPolicyIntegerTagExists:(unsigned int)a0;
- (id)_bootPolicyDigestTagExists:(unsigned int)a0;
- (void)reportNotificationResponseDataToRTC:(id)a0 ofType:(id)a1 additionalInfo:(id)a2;
- (void)reportDoItLaterToRTC:(id)a0;
- (void)reportOSUpdateInstallDataToRTC:(id)a0 options:(id)a1;

@end
