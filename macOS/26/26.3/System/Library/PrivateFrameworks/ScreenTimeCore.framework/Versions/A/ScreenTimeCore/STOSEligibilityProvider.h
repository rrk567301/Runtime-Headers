@interface STOSEligibilityProvider : NSObject <STOSEligibilityProviding>

+ (id)create;

- (id)init;
- (void).cxx_destruct;
- (id)getEligibilityRegionsForLocalUserAndReturnError:(id *)a0;
- (id)isCommunicationSafetyRegulatedForLocalUserAndReturnError:(id *)a0;
- (id)isWebContentFilterRegulatedForLocalUserAndReturnError:(id *)a0;

@end
