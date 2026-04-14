@class NSXPCConnection, NSXPCInterface;

@interface SPDeveloperPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly, getter=isDeveloperModeEnabled) BOOL developerModeEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setDeveloperModeEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)isDeveloperToolEnvironmentWithError:(id *)a0;
- (id)createLocalDevelopmentCertificateForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)removeLocalDevelopmentCertificateForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)registerDevelopmentTeamWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)unregisterDevelopmentTeamWithIdentifier:(id)a0 error:(id *)a1;

@end
