@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject

@property (retain) NSMutableDictionary *capabilitiesInformation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)dictionaryRepresentation;
- (void)gatherCapabilitiesWithOptions:(id)a0;
- (void)addVersion;
- (void)addCodecInformation;
- (void)addVersion1And2HEVCCodecInformationToDictionary:(id)a0;
- (void)addCodecSupportInformationToDictionary:(id)a0;
- (void)addHEIFContainerInformationToDictionary:(id)a0;
- (void)addVendorSpecificInformation;
- (void)addTranscodeChoiceWithOptions:(id)a0;
- (void)addLivePhotoInformationToDictionary:(id)a0;
- (void)addAssetBundleInformationToDictionary:(id)a0;

@end
