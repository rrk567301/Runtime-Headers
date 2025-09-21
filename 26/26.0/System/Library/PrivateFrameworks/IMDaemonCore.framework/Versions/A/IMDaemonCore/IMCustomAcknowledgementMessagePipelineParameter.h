@class NSString, NSData, NSDictionary;

@interface IMCustomAcknowledgementMessagePipelineParameter : IMBalloonPluginPipelineParameter <IMCustomAcknowledgementMessageProcessingParameter>

@property (copy, nonatomic) NSString *balloonPluginBundleID;
@property (copy, nonatomic) NSData *balloonPluginPayload;
@property (copy, nonatomic) NSDictionary *combinedPayloadAttachmentDictionary;
@property (nonatomic) long long associatedMessageType;
@property (copy, nonatomic) NSString *associatedMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;

- (id)description;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;
- (id)messageSummaryInfoDictionaryWithBlastDoorMessage:(id)a0;
- (BOOL)supportsStickerAttributesInMessageBody;

@end
