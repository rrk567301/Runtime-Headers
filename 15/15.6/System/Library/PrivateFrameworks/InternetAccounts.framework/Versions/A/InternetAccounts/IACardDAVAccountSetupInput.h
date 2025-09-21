@class NSString;

@interface IACardDAVAccountSetupInput : IAAccountSetupInput

@property (retain) NSString *serverAddress;
@property (retain) NSString *autoHostname;
@property (retain) NSString *autoSchema;
@property char migrateLocalData;
@property (retain) NSString *emailAddress;

- (void).cxx_destruct;

@end
