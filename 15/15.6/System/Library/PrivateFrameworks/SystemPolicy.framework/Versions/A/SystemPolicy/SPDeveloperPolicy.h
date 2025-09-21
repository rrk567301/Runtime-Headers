@class NSXPCConnection, NSXPCInterface;

@interface SPDeveloperPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly, getter=isDeveloperModeEnabled) char developerModeEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)createLocalDevelopmentCertificateForUser:(unsigned int)a0 error:(id *)a1;
- (char)isDeveloperToolEnvironmentWithError:(id *)a0;
- (char)registerDevelopmentTeamWithIdentifier:(id)a0 error:(id *)a1;
- (char)removeLocalDevelopmentCertificateForUser:(unsigned int)a0 error:(id *)a1;
- (char)setDeveloperModeEnabled:(char)a0 error:(id *)a1;
- (char)unregisterDevelopmentTeamWithIdentifier:(id)a0 error:(id *)a1;

@end
