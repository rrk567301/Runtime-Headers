@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    char _convertToLegacyPriority;
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

@property long long priority;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)addPolicy:(id)a0;
- (id)initWithSocket:(int)a0;
- (id)dumpDomainTries;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (unsigned long long)addDomainTrieWithData:(id)a0;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(char)a1;
- (char)apply;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)dumpKernelPolicies;
- (int)dupSocket;
- (id)initFromPrivilegedProcess;
- (id)initWithSessionName:(id)a0;
- (char)lockSessionToCurrentProcess;
- (id)policyWithID:(unsigned long long)a0;
- (char)registerServiceUUID:(id)a0;
- (char)removeAllDomainFilters;
- (char)removeAllDomainTries;
- (char)removeAllPolicies;
- (char)removeDomainFilterWithID:(unsigned long long)a0;
- (char)removeDomainTrieWithID:(unsigned long long)a0;
- (char)removePolicyWithID:(unsigned long long)a0;
- (char)unregisterServiceUUID:(id)a0;

@end
