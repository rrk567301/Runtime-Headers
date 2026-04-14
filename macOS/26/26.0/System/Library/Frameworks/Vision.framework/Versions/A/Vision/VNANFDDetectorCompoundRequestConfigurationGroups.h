@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)a0 compoundRequestRevision:(unsigned long long)a1;

- (id)configurationForRequest:(id)a0;
- (unsigned long long)count;
- (id)allConfigurations;
- (id)init;
- (void).cxx_destruct;

@end
