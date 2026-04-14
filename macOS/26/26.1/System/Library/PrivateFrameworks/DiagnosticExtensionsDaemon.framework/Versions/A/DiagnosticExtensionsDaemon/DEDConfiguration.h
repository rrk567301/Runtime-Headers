@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (id)sharedAnonymousListener;
- (id)errorDomain;
- (id)machServiceName;
- (unsigned long long)connectionType;
- (id)identifier;
- (void).cxx_destruct;
- (id)dedDirectory;
- (void)invalidateTestListeners;
- (const char *)loggingSubsystem;

@end
