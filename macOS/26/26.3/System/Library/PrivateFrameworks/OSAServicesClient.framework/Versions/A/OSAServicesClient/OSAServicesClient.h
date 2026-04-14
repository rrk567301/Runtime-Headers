@class NSXPCConnection;
@protocol OTAAgentServices;

@interface OSAServicesClient : NSObject {
    NSXPCConnection *_connection;
    id<OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (id)crashreporterKey;
- (id)init;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)uidForUser:(id)a0;
- (id)queryKey:(struct __CFString { } *)a0;
- (id)awdKey;

@end
