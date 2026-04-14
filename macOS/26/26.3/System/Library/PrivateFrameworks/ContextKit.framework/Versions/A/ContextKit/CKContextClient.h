@class CKContextSemaphore, NSSet, NSString, NSMutableArray;

@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    CKContextSemaphore *_serviceSemaphore;
}

@property (readonly, nonatomic) unsigned long long defaultRequestType;
@property (readonly, nonatomic) NSSet *capabilities;

+ (id)new;
+ (void)initialize;
+ (BOOL)isLikelyUnsolicitedUserInteraction;
+ (id)clientWithPreferredRequestType:(unsigned long long)a0;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)a0 andMachTime:(unsigned long long)a1;
+ (id)clientWithDefaultRequestType:(unsigned long long)a0;

- (id)createRequest;
- (void)workWithServiceSemaphore:(id /* block */)a0;
- (id)init;
- (id)retrieveCapabilites;
- (void)ensureFullyInitialized;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)registerConfigurationUpdateHandler:(id /* block */)a0;
- (void)retrieveCapabilitiesWithReply:(id /* block */)a0;
- (id)newRequest;
- (void).cxx_destruct;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)a0;
- (id)indexVersionId;
- (id)initWithDefaultRequestType:(unsigned long long)a0;
- (void)didReceiveCKContextServiceUpdateNotification;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)a0;
- (void)ancestorsForTopics:(id)a0 withReply:(id /* block */)a1;
- (void)groupResponses:(id)a0 withReply:(id /* block */)a1;

@end
