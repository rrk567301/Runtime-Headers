@class NSXPCConnection;
@protocol OTAAgentServices;

@interface OSAServicesClient : NSObject {
    NSXPCConnection *_connection;
    id<OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;
- (unsigned int)uidForUser:(id)a0;
- (id)awdKey;
- (void).cxx_destruct;
- (id)crashreporterKey;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;
- (id)init;
- (id)queryKey:(struct __CFString { } *)a0;
- (void)dealloc;

@end
