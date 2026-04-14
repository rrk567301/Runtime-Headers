@class NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (unsigned long long)count;
- (id)allConfigurations;
- (id)init;
- (id)configurationForRequest:(id)a0 withObservationGroup:(id)a1 compoundRequestRevision:(unsigned long long)a2;
- (void).cxx_destruct;

@end
