@class NSObject, NSXPCConnection, LSSettingsStoreConfiguration;
@protocol OS_dispatch_queue;

@interface _LSClientSettingsStore : LSSettingsStore {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) LSSettingsStoreConfiguration *configuration;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (BOOL)supportsSecureCoding;

- (BOOL)resetUserElectionsWithError:(id *)a0;
- (void)dealloc;
- (unsigned char)userElectionForExtensionKey:(id)a0;
- (void).cxx_destruct;
- (id)__internalQueue_xpcConnectionWithError:(id *)a0;
- (BOOL)setUserElection:(unsigned char)a0 forExtensionKey:(id)a1 error:(id *)a2;
- (id)init;

@end
