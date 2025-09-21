@interface IMStickerMessagePipelineParameter : IMAssociatedMessagePipelineParameter <IMStickerMessageProcessingParameter>

- (id)description;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;
- (char)supportsStickerAttributesInMessageBody;

@end
