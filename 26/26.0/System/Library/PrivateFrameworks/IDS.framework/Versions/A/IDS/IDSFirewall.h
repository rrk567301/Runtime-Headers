@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface IDSFirewall : NSObject

@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSSet *impactedServiceIdentifiers;

- (void)recentlyBlockedEntries:(id /* block */)a0;
- (void)removeAllEntries:(id /* block */)a0;
- (void)populateImpactedServices:(id /* block */)a0;
- (void)replaceDonatedEntriesWithEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)addEntries:(id)a0 withCompletion:(id /* block */)a1;
- (id)_removeInvalidEntries:(id)a0;
- (void)replaceAllEntriesWithEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)replaceEntries:(id)a0 withCompletion:(id /* block */)a1;
- (id)description;
- (id)initWithService:(id)a0 queue:(id)a1;
- (void)currentDonatedEntries:(id /* block */)a0;
- (void)removeAllDonatedEntries:(id /* block */)a0;
- (void)currentEntries:(id /* block */)a0;
- (void)removeDonatedEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)donateEntries:(id)a0 withCompletion:(id /* block */)a1;

@end
