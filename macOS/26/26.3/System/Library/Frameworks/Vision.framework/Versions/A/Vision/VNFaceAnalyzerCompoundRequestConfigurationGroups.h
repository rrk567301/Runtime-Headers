@class NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (unsigned long long)count;
- (id)init;
- (id)allConfigurations;
- (void).cxx_destruct;
- (id)configurationForRequest:(id)a0 withObservationGroup:(id)a1 compoundRequestRevision:(unsigned long long)a2;

@end
