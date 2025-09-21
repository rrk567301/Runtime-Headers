@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (void)invalidateTestListeners;
- (id)identifier;
- (id)machServiceName;
- (id)dedDirectory;
- (id)sharedAnonymousListener;
- (const char *)loggingSubsystem;
- (unsigned long long)connectionType;
- (void).cxx_destruct;
- (id)errorDomain;

@end
