@class NSArray;

@interface VNTranslationalImageRegistrationRequest : VNImageRegistrationRequest

@property (readonly, copy) NSArray *results;

- (char)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)supportedComputeStageDevicesAndReturnError:(id *)a0;

@end
