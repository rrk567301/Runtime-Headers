@class NSString, STListDataDiff;

@interface STMediaStatusDomainDataDiff : NSObject <BSDebugDescriptionProviding, STStatusDomainDataDiff> {
    STListDataDiff *_microphoneAttributionListDataDiff;
    STListDataDiff *_mutedMicrophoneRecordingAttributionListDataDiff;
    STListDataDiff *_systemAudioRecordingAttributionListDataDiff;
    STListDataDiff *_cameraAttributionListDataDiff;
    STListDataDiff *_screenCaptureAttributionListDataDiff;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)diffByApplyingDiff:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)init;
- (id)succinctDescription;
- (void)applyToMutableData:(id)a0;
- (id)initWithMicrophoneAttributionListDataDiff:(id)a0 mutedMicrophoneRecordingAttributionListDataDiff:(id)a1 systemAudioRecordingAttributionListDataDiff:(id)a2 cameraAttributionListDataDiff:(id)a3 screenCaptureAttributionListDataDiff:(id)a4;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isOrthogonalToDiff:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dataByApplyingToData:(id)a0;

@end
