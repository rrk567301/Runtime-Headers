@interface SASoftwareUpdateManager : NSObject <SASoftwareUpdateManagerProtocol>

- (char)requiresDeferredMandatoryUpdate;
- (char)forceDeferredMandatoryUpdate;
- (char)forceNoMandatoryUpdateFound;

@end
