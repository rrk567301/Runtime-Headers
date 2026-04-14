@class NSString;

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol>

@property (nonatomic) BOOL hasFileProviderPresenceTCCAccess;
@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)start;
- (void)cancel;
- (void)dumpStateTo:(id)a0;
- (id)newFileProviderProxyWithPID:(int)a0;
- (id)newFileProviderProxyWithoutPID;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (id)newFileProviderProxyWithTimeout:(BOOL)a0 pid:(int)a1;
- (id)existingFileProviderProxyWithTimeout:(BOOL)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)updatePresenceTCCWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end
