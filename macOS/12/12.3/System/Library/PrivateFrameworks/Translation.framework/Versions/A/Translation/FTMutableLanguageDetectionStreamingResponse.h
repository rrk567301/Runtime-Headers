@class FTLanguageDetectionResponse;

@interface FTMutableLanguageDetectionStreamingResponse : FTLanguageDetectionStreamingResponse

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTLanguageDetectionResponse *contentAsFTLanguageDetectionResponse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
