@class NSXPCConnection, NSXPCInterface;

@interface SPInstallationPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
    char _requireDaemon;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)canInstallPackage:(id)a0 withUserConsent:(char)a1 withHash:(id)a2 evaluateOnly:(char)a3 synchronousPrompt:(char)a4 error:(id *)a5;
- (char)trustPackagePayload:(id)a0 withDestinationTarget:(id)a1 withHashMap:(id)a2 withUserConsent:(char)a3 error:(id *)a4;
- (char)trustPackagePayload:(id)a0 withDestinationTarget:(id)a1 withUserConsent:(char)a2 error:(id *)a3;

@end
