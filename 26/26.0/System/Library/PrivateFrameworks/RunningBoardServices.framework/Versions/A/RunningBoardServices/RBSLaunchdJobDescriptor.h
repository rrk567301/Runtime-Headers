@class NSSet, NSString, NSURL, NSArray, NSDictionary, OSLaunchdJobProperties;

@interface RBSLaunchdJobDescriptor : NSObject

@property (readonly) NSSet *managedEndpointLaunchIdentifiers;
@property (retain) NSURL *executableURL;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSArray *attributes;
@property (retain) NSDictionary *launchRequestEndpointIdentifiers;
@property BOOL backoff;
@property (retain) OSLaunchdJobProperties *jobProperties;
@property (retain) NSDictionary *clientRestriction;

- (void).cxx_destruct;
- (id)initWithExecutableURL:(id)a0 bundleIdentifier:(id)a1;

@end
