@class NSArray, NSString, STMutableListData;

@interface STMutableMediaStatusDomainData : STMediaStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *microphoneRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *mutedMicrophoneRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *systemAudioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *cameraAttributionListData;
@property (copy, nonatomic) NSArray *cameraAttributions;
@property (copy, nonatomic) NSArray *microphoneRecordingAttributions;
@property (copy, nonatomic) NSArray *mutedMicrophoneRecordingAttributions;
@property (copy, nonatomic) NSArray *systemAudioRecordingAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAudioRecordingAttribution:(id)a0;
- (void)addMicrophoneRecordingAttribution:(id)a0;
- (void)addSystemAudioRecordingAttribution:(id)a0;
- (void)removeAudioRecordingAttribution:(id)a0;
- (void)removeMicrophoneRecordingAttribution:(id)a0;
- (void)removeSystemAudioRecordingAttribution:(id)a0;
- (void)addCameraAttribution:(id)a0;
- (void)removeCameraAttribution:(id)a0;
- (void)setAudioRecordingAttributions:(id)a0;
- (void)removeCameraCaptureAttribution:(id)a0;
- (void)addCameraCaptureAttribution:(id)a0;
- (void)addMutedAudioRecordingAttribution:(id)a0;
- (void)addMutedMicrophoneRecordingAttribution:(id)a0;
- (BOOL)applyDiff:(id)a0;
- (id)initWithMicrophoneRecordingAttributionListData:(id)a0 mutedMicrophoneRecordingAttributionListData:(id)a1 systemAudioRecordingAttributionListData:(id)a2 cameraAttributionListData:(id)a3;
- (void)removeMutedAudioRecordingAttribution:(id)a0;
- (void)removeMutedMicrophoneRecordingAttribution:(id)a0;
- (void)setAudioRecordingAttributionList:(id)a0;
- (void)setCameraAttributions:(id)a0;
- (void)setCameraCaptureAttributionList:(id)a0;
- (void)setCameraCaptureAttributions:(id)a0;
- (void)setMicrophoneRecordingAttributions:(id)a0;
- (void)setMutedAudioRecordingAttributionList:(id)a0;
- (void)setMutedAudioRecordingAttributions:(id)a0;
- (void)setMutedMicrophoneRecordingAttributions:(id)a0;
- (void)setSystemAudioRecordingAttributions:(id)a0;

@end
