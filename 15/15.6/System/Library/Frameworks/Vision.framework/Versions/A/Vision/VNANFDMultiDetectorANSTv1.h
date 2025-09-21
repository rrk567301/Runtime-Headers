@interface VNANFDMultiDetectorANSTv1 : VNANFDMultiDetectorANODv4

@property (class, readonly, nonatomic) char supportsExecution;

+ (Class)detectorClass;
+ (char)shouldAlignFacesForRequestWithSpecifier:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

@end
