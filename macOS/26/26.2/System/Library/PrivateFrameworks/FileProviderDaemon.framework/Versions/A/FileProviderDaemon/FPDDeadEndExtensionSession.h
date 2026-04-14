@class NSString, NSError;

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol> {
    NSError *_error;
}

@property (readonly, nonatomic) BOOL hasFileProviderAttributionMDMAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)unregisterLifetimeExtensionForObject:(id)a0;
- (void)dumpStateTo:(id)a0;
- (id)newFileProviderProxyWithTimeout:(double)a0 pid:(int)a1;
- (id)initWithError:(id)a0;
- (void)terminateWithReason:(id)a0;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)registerLifetimeExtensionForObject:(id)a0;
- (id)init;
- (id)existingFileProviderProxyWithTimeout:(double)a0 onlyAlreadyLifetimeExtended:(BOOL)a1 pid:(int)a2;
- (void)cancelAsync;

@end
