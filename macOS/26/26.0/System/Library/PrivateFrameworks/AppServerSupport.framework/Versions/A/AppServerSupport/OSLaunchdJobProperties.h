@class NSData, NSString, NSDictionary, NSURL, NSArray, NSUUID, NSSet;

@interface OSLaunchdJobProperties : NSObject

@property (copy, nonatomic) NSString *sandboxProfile;
@property (retain, nonatomic) NSURL *sandboxContainer;
@property (copy, nonatomic) NSDictionary *environmentVariables;
@property (copy, nonatomic) NSDictionary *arguments;
@property (copy, nonatomic) NSArray *programArguments;
@property (nonatomic) unsigned int platform;
@property (nonatomic) BOOL abandonCoalition;
@property (nonatomic) BOOL joinExistingSession;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *processType;
@property (copy, nonatomic) NSString *runLoopType;
@property (nonatomic) BOOL watchdogTimeout;
@property (copy, nonatomic) NSString *roleAccount;
@property (copy, nonatomic) NSString *personaString;
@property (nonatomic) unsigned int enterprisePersona;
@property (retain, nonatomic) NSUUID *oneShotUUID;
@property (copy, nonatomic) NSDictionary *additionalProperties;
@property (copy, nonatomic) NSSet *managedEndpointLaunchIdentifiers;
@property (copy, nonatomic) NSArray *managedByServices;
@property (copy, nonatomic) NSDictionary *additionalSubServices;
@property (nonatomic) BOOL omitSandboxParameters;
@property (copy, nonatomic) NSString *uiApplicationClass;
@property (copy, nonatomic) NSString *uiApplicationDelegateClass;
@property (copy, nonatomic) NSDictionary *spawnConstraint;
@property (copy, nonatomic) NSData *lightweightCodeRequirement;
@property (copy, nonatomic) NSDictionary *overlay;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)xpcOverlay;

@end
