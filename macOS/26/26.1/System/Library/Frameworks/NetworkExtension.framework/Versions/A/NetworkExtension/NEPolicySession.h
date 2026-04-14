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

- (unsigned long long)addPolicy:(id)a0;
- (id)dumpKernelPolicies;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)addDomainFilterWithData:(id)a0;
- (BOOL)removeAllPolicies;
- (BOOL)lockSessionToCurrentProcess;
- (BOOL)removeDomainFilterWithID:(unsigned long long)a0;
- (id)initFromPrivilegedProcess;
- (id)initWithSessionName:(id)a0;
- (BOOL)removeAllDomainFilters;
- (id)initWithSocket:(int)a0;
- (BOOL)removePolicyWithID:(unsigned long long)a0;
- (unsigned long long)addDomainTrieWithData:(id)a0;
- (int)dupSocket;
- (id)description;
- (unsigned long long)addPolicy:(id)a0 storeLocally:(BOOL)a1;
- (id)dumpDomainTries;
- (void)dealloc;
- (BOOL)apply;
- (id)policyWithID:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)removeDomainTrieWithID:(unsigned long long)a0;
- (BOOL)removeAllDomainTries;
- (id)init;

@end
