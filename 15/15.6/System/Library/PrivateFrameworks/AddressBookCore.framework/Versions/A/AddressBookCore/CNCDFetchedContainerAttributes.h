@interface CNCDFetchedContainerAttributes : NSObject

@property (readonly) int iOSLegacyIdentifier;
@property (readonly) char isGuardianRestricted;

- (id)initWithFetchedCNCDContainers:(id)a0;

@end
