@class STAttributedEntity, STLocationStatusDomainLocationAttribution, NSString, STMediaStatusDomainCameraCaptureAttribution, STMediaStatusDomainMicrophoneRecordingAttribution, STActivityAttribution;

@interface STDataAccessAttribution : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double accessStartTimestamp;
@property (readonly, nonatomic) double accessEndTimestamp;
@property (readonly, nonatomic) double accessDuration;
@property (readonly, copy, nonatomic) STActivityAttribution *activityAttribution;
@property (readonly, nonatomic) unsigned long long dataAccessType;
@property (readonly, copy, nonatomic) STMediaStatusDomainMicrophoneRecordingAttribution *microphoneRecordingAttribution;
@property (readonly, copy, nonatomic) STMediaStatusDomainCameraCaptureAttribution *cameraCaptureAttribution;
@property (readonly, copy, nonatomic) STLocationStatusDomainLocationAttribution *locationAttribution;
@property (readonly, copy, nonatomic) STAttributedEntity *attributedEntity;
@property (readonly, nonatomic, getter=isRecent) BOOL recent;
@property (readonly, nonatomic) BOOL hasSatisfiedMinimumOnTime;
@property (readonly, copy, nonatomic) STActivityAttribution *audioRecordingActivityAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithLocationAttribution:(id)a0 recent:(BOOL)a1 startTimestamp:(double)a2 endTimestamp:(double)a3;
- (id)initWithAudioRecordingActivityAttribution:(id)a0 recent:(BOOL)a1 startTimestamp:(double)a2 endTimestamp:(double)a3;
- (id)initWithCameraCaptureAttribution:(id)a0 recent:(BOOL)a1 startTimestamp:(double)a2 endTimestamp:(double)a3;
- (id)initWithDataAccessAttribution:(id)a0;
- (id)initWithDataAccessType:(unsigned long long)a0 microphoneRecordingAttribution:(id)a1 cameraCaptureAttribution:(id)a2 locationAttribution:(id)a3 recent:(BOOL)a4 startTimestamp:(double)a5 endTimestamp:(double)a6;
- (id)initWithMicrophoneRecordingAttribution:(id)a0 recent:(BOOL)a1 startTimestamp:(double)a2 endTimestamp:(double)a3;

@end
