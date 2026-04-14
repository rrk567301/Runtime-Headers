@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (id)identifier;
- (unsigned long long)connectionType;
- (const char *)loggingSubsystem;
- (id)errorDomain;
- (id)dedDirectory;
- (void).cxx_destruct;
- (id)sharedAnonymousListener;
- (void)invalidateTestListeners;
- (id)machServiceName;

@end
