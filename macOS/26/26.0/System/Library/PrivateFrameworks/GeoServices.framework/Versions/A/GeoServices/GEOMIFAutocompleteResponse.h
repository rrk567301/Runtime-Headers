@class NSArray, GEOMIFExperimentMetadata, GEOMIFModelMetadata, GEOPDMIFAutocompleteResponse;

@interface GEOMIFAutocompleteResponse : NSObject {
    GEOPDMIFAutocompleteResponse *_response;
}

@property (readonly, nonatomic) NSArray *resultSections;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) GEOMIFExperimentMetadata *experimentMetadata;
@property (readonly, nonatomic) GEOMIFModelMetadata *modelMetadata;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSerializedResponseData:(id)a0;
- (id)initWithAutocompleteEntries:(id)a0;
- (id)initWithPDMIFAutocompleteResponse:(id)a0;

@end
