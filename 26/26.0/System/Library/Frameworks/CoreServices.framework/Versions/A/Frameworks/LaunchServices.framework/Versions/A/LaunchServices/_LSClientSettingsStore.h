@class NSObject, NSXPCConnection, LSSettingsStoreConfiguration;
@protocol OS_dispatch_queue;

@interface _LSClientSettingsStore : LSSettingsStore {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) LSSettingsStoreConfiguration *configuration;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (BOOL)supportsSecureCoding;

- (BOOL)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 error:(id *)a2;
- (BOOL)resetUserElectionsWithError:(id *)a0;
- (void)dealloc;
- (id)init;
- (unsigned char)userElectionForExtensionKey:(id)a0;
- (id)__internalQueue_xpcConnectionWithError:(id *)a0;
- (void).cxx_destruct;

@end
