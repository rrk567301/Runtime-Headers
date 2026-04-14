@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (const char *)loggingSubsystem;
- (unsigned long long)connectionType;
- (void)invalidateTestListeners;
- (void).cxx_destruct;
- (id)sharedAnonymousListener;
- (id)machServiceName;
- (id)identifier;
- (id)dedDirectory;
- (id)errorDomain;

@end
