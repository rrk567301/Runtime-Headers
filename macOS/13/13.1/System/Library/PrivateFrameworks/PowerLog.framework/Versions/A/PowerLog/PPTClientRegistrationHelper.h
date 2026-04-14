@class NSXPCConnection;

@interface PPTClientRegistrationHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (BOOL)permissionsForSubsystem:(id)a0 category:(id)a1;
- (id)createXPCConnection;
- (void)closeXPCConnection;

@end
