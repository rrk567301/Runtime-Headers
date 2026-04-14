@class NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (id)configurationForRequest:(id)a0 withObservationGroup:(id)a1 compoundRequestRevision:(unsigned long long)a2;
- (id)allConfigurations;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;

@end
