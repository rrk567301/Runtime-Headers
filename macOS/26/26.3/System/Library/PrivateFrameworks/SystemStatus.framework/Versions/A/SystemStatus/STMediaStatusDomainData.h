@class NSArray, STListData, NSString;

@interface STMediaStatusDomainData : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *microphoneAttributionListData;
@property (readonly, copy, nonatomic) STListData *mutedMicrophoneRecordingAttributionListData;
@property (readonly, copy, nonatomic) STListData *systemAudioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STListData *cameraAttributionListData;
@property (readonly, copy, nonatomic) STListData *screenCaptureAttributionListData;
@property (readonly, copy, nonatomic) NSArray *cameraAttributions;
@property (readonly, copy, nonatomic) NSArray *microphoneAttributions;
@property (readonly, copy, nonatomic) NSArray *screenCaptureAttributions;
@property (readonly, copy, nonatomic) NSArray *mutedMicrophoneRecordingAttributions;
@property (readonly, copy, nonatomic) NSArray *systemAudioRecordingAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)cameraCaptureAttributions;
- (id)audioRecordingAttributionList;
- (id)succinctDescriptionBuilder;
- (id)diffFromData:(id)a0;
- (id)microphoneRecordingAttributions;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_initWithMicrophoneAttributionListData:(id)a0 mutedMicrophoneRecordingAttributionListData:(id)a1 systemAudioRecordingAttributionListData:(id)a2 cameraAttributionListData:(id)a3 screenCaptureAttributionListData:(id)a4;
- (id)dataByApplyingDiff:(id)a0;
- (id)mutedAudioRecordingAttributionList;
- (id)cameraCaptureAttributionList;
- (id)succinctDescription;
- (id)camerasInUseMatchingAttribution:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)audioRecordingAttributions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutedAudioRecordingAttributions;
- (id)initWithMicrophoneAttributionListData:(id)a0 mutedMicrophoneRecordingAttributionListData:(id)a1 systemAudioRecordingAttributionListData:(id)a2 cameraAttributionListData:(id)a3 screenCaptureAttributionListData:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
