@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)a0 compoundRequestRevision:(unsigned long long)a1;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)allConfigurations;
- (id)configurationForRequest:(id)a0;
- (id)init;

@end
