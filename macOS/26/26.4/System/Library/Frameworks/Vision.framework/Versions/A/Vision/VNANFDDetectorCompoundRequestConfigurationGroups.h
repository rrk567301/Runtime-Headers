@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)a0 compoundRequestRevision:(unsigned long long)a1;

- (id)configurationForRequest:(id)a0;
- (id)allConfigurations;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;

@end
