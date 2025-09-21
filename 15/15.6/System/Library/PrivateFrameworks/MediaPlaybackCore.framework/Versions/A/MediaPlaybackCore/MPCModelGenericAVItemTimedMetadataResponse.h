@class MPCModelGenericAVItemTimedMetadataStreamFields, MPModelResponse, NSData, MPSectionedCollection;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {
    MPModelResponse *_personalizationResponse;
}

@property (nonatomic, getter=isFirstResponse) char firstResponse;
@property (nonatomic, getter=isFinalResponse) char finalResponse;
@property (copy, nonatomic) NSData *adamIDData;
@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields;
@property (copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_personalizationResponseDidInvalidateNotification:(id)a0;
- (id)initWithRequest:(id)a0 personalizationResponse:(id)a1 firstResponse:(char)a2 finalResponse:(char)a3;

@end
