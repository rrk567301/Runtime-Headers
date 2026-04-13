@class FTBatchTranslationResponse, FTFinalBlazarResponse;

@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
