@class NSString;

@interface CSAttSiriMagusSupportedPolicy : NSObject <CSAttSiriMitigationAssetHandlerDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSPhoneCallStateMonitorDelegate>

@property char isAssetMagusSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (char)_isInputOriginSupportedByContinuousConversation:(id)a0;
+ (char)isCurrentlyInActiveCall;
+ (char)isCurrentlyInSplitterState;

- (void)start;
- (void)CSBluetoothWirelessSplitterMonitor:(id)a0 didReceiveSplitterStateChange:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(char)a2;
- (void)CSPhoneCallStateMonitor:(id)a0 didRecievePhoneCallStateChange:(unsigned long long)a1;
- (char)_isMagusSupportedWithRecordRoute:(id)a0 playbackRoute:(id)a1 isInSplitterMode:(char)a2 isInActiveCall:(char)a3 isSupportedRequestType:(char)a4 audioSessionId:(unsigned int)a5 recordDeviceInfo:(id)a6;
- (char)_isRouteValidForEchoCancellationWithAppleSiliconMac:(id)a0;
- (void)_updateWithAsset:(id)a0;
- (char)getIsAssetMagusSupported;
- (char)getIsMagusSupported;
- (char)isMagusSupportedWithAudioRecordContext:(id)a0 recordRoute:(id)a1 playbackRoute:(id)a2 audioSessionId:(unsigned int)a3 recordDeviceInfo:(id)a4;
- (char)isMagusSupportedWithInputOrigin:(id)a0 recordRoute:(id)a1 playbackRoute:(id)a2;
- (char)isMagusSupportedWithInputOrigin:(id)a0 recordRoute:(id)a1 playbackRoute:(id)a2 isInSplitterMode:(char)a3 isInActiveCall:(char)a4;
- (void)mitigationAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;

@end
