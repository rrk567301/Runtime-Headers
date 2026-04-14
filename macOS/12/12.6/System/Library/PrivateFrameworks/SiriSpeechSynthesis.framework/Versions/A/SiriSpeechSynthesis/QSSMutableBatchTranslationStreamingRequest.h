@class QSSBatchTranslationRequest, QSSBatchTranslationFeedbackRequest, QSSBatchTranslationLoggingRequest;

@interface QSSMutableBatchTranslationStreamingRequest : QSSBatchTranslationStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSBatchTranslationRequest *contentAsQSSBatchTranslationRequest;
@property (copy, nonatomic) QSSBatchTranslationFeedbackRequest *contentAsQSSBatchTranslationFeedbackRequest;
@property (copy, nonatomic) QSSBatchTranslationLoggingRequest *contentAsQSSBatchTranslationLoggingRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
