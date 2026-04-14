@class NSXPCConnection, NSXPCInterface;

@interface SPDeveloperPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

@property (readonly, getter=isDeveloperModeEnabled) BOOL developerModeEnabled;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)createLocalDevelopmentCertificateForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)isDeveloperToolEnvironmentWithError:(id *)a0;
- (BOOL)registerDevelopmentTeamWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeLocalDevelopmentCertificateForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)setDeveloperModeEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)unregisterDevelopmentTeamWithIdentifier:(id)a0 error:(id *)a1;

@end
