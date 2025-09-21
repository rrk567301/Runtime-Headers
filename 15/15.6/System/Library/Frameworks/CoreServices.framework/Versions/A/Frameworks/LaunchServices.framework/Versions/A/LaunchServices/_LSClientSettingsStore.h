@class NSObject, NSXPCConnection, LSSettingsStoreConfiguration;
@protocol OS_dispatch_queue;

@interface _LSClientSettingsStore : LSSettingsStore {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) LSSettingsStoreConfiguration *configuration;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)__internalQueue_xpcConnectionWithError:(id *)a0;
- (char)resetUserElectionsWithError:(id *)a0;
- (char)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 error:(id *)a2;
- (unsigned char)userElectionForExtensionKey:(id)a0;

@end
