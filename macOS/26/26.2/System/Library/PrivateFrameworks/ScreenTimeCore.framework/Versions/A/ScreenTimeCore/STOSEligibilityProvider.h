@interface STOSEligibilityProvider : NSObject <STOSEligibilityProviding>

+ (id)create;

- (void).cxx_destruct;
- (id)init;
- (id)getEligibilityRegionsForLocalUserAndReturnError:(id *)a0;
- (id)isCommunicationSafetyRegulatedForLocalUserAndReturnError:(id *)a0;
- (id)isWebContentFilterRegulatedForLocalUserAndReturnError:(id *)a0;

@end
