@class NSString, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet, BKSHIDEventDeferringEnvironment;

@interface BKEventDeferringEnvironmentGraph : NSObject <BSDescriptionStreamable, NSCopying> {
    NSMutableDictionary *_topLevelInEachProcess;
    NSMutableSet *_selectedNodeIdentities;
    NSMutableDictionary *_pidToActiveUIResponderNodes;
    NSMutableDictionary *_pidToActiveUIResponderTokens;
    NSMutableOrderedSet *_allNodes;
    NSMutableDictionary *_nodeByIdentity;
    NSMutableDictionary *_tokenToNode;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)appendGraphDescription:(id)a0;
- (BOOL)containsDeferringRuleIdentity:(id)a0;
- (id)deferringPathForPID:(int)a0 dispatchTarget:(id)a1;
- (void)logConnectionDescriptionForDeferringRuleIdentity:(id)a0 toTarget:(id)a1;
- (void)selectDeferringPathForToken:(id)a0;
- (void)setActiveUIResponderTokens:(id)a0 forPID:(int)a1;
- (void)setRules:(id)a0 forPID:(int)a1;

@end
