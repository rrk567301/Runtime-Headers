@class NSArray;

@interface PKAuxiliaryCapabilityKeyCreationMetadataResponse : PKAuxiliaryCapabilityWebServiceResponse {
    NSArray *_entryDicts;
}

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)entriesForCapabilities:(id)a0;

@end
