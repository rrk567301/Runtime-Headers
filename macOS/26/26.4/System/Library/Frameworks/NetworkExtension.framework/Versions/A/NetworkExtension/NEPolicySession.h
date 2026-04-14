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

- (BOOL)lockSessionToCurrentProcess;
- (id)initWithSessionName:(id)a0;
- (BOOL)removeDomainFilterWithID:(unsigned long long)a0;
- (id)dumpDomainTries;
- (id)dumpKernelPolicies;
- (BOOL)apply;
- (int)dupSocket;
- (id)initFromPrivilegedProcess;
- (unsigned long long)addPolicy:(id)a0;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (BOOL)removeAllDomainTries;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)addDomainTrieWithData:(id)a0;
- (BOOL)removeAllPolicies;
- (id)initWithSocket:(int)a0;
- (BOOL)removeDomainTrieWithID:(unsigned long long)a0;
- (id)init;
- (id)description;
- (BOOL)removeAllDomainFilters;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)dealloc;
- (id)policyWithID:(unsigned long long)a0;

@end
