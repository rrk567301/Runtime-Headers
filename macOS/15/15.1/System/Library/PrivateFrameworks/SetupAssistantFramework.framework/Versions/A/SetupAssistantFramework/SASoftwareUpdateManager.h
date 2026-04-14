@interface SASoftwareUpdateManager : NSObject

- (BOOL)requiresDeferredMandatoryUpdate;
- (BOOL)forceDeferredMandatoryUpdate;
- (BOOL)forceNoMandatoryUpdateFound;

@end
