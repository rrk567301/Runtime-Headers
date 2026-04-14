@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (id)sharedAnonymousListener;
- (id)identifier;
- (unsigned long long)connectionType;
- (id)errorDomain;
- (void)invalidateTestListeners;
- (id)dedDirectory;
- (void).cxx_destruct;
- (id)machServiceName;
- (const char *)loggingSubsystem;

@end
