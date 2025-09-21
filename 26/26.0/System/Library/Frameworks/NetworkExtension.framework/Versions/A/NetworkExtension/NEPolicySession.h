@class NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription> {
    BOOL _convertToLegacyPriority;
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

@property long long priority;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (id)initFromPrivilegedProcess;
- (void)dealloc;
- (BOOL)lockSessionToCurrentProcess;
- (BOOL)removeDomainFilterWithID:(unsigned long long)a0;
- (int)dupSocket;
- (unsigned long long)addDomainTrieWithData:(id)a0;
- (id)init;
- (id)initWithSessionName:(id)a0;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (id)initWithSocket:(int)a0;
- (id)policyWithID:(unsigned long long)a0;
- (id)description;
- (BOOL)removeAllDomainFilters;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (unsigned long long)addPolicy:(id)a0;
- (BOOL)removeAllDomainTries;
- (BOOL)removeDomainTrieWithID:(unsigned long long)a0;
- (id)dumpKernelPolicies;
- (BOOL)removeAllPolicies;
- (id)dumpDomainTries;
- (void).cxx_destruct;
- (BOOL)apply;

@end
