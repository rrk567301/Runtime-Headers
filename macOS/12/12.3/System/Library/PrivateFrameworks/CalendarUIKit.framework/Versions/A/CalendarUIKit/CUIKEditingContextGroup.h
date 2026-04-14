@class NSNumber, NSSet, EKEventStore, NSString, NSMutableArray, CUIKObjectGroup;

@interface CUIKEditingContextGroup : NSObject <CUIKEditingContextObserver>

@property (retain) CUIKObjectGroup *objectGroup;
@property (retain) NSMutableArray *additionalObjectGroups;
@property (retain) NSSet *openContexts;
@property (retain) NSNumber *spanDecisionAsNumber;
@property (retain) NSNumber *earlyCommitDecisionAsNumber;
@property (weak) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeContext:(id)a0;
- (id)trackedObjects;
- (id)identifiersToCommit;
- (id)oldObject:(id)a0 didUpdateTo:(id)a1;
- (BOOL)isTestObserver;
- (void)addContext:(id)a0;
- (id)originalObjects;
- (void)addAdditionalObjects:(id)a0;
- (unsigned long long)spanDecisionForGroup;
- (BOOL)spanDecisionForGroupIsSet;
- (void)specifySpanDecisionForGroup:(unsigned long long)a0;
- (void)unspecifySpanDecisionForGroup;
- (unsigned long long)earlyCommitDecisionForGroup;
- (BOOL)earlyCommitDecisionForGroupIsSet;
- (void)specifyEarlyCommitDecisionForGroup:(unsigned long long)a0;
- (void)unspecifyEarlyCommitDecisionForGroup;
- (id)newIdentifierForIdentifier:(id)a0;
- (id)initWithObjectGroup:(id)a0;
- (id)activeEditingContexts;
- (id)activeEditingContextsExcludingContext:(id)a0;

@end
