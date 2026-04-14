@class NSArray;

@interface CCSimpleRenderPass : CCSimplePass <CCRenderPass> {
    NSArray *_attachmentDescriptors;
    BOOL _executable;
}

@property (nonatomic) unsigned long long requiredImageblockSampleLength;
@property (readonly, nonatomic) BOOL isRenderPass;
@property (nonatomic) unsigned long long encoderAction;
@property (retain, nonatomic) NSArray *attachmentDescriptors;
@property (nonatomic) unsigned long long sharedImageblockSampleLength;
@property (nonatomic) unsigned long long depthAttachmentFormat;
@property (retain, nonatomic) NSArray *colorAttachmentFormats;

- (void).cxx_destruct;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (BOOL)executable;
- (void)updateAttachmentDescriptorReferences;

@end
