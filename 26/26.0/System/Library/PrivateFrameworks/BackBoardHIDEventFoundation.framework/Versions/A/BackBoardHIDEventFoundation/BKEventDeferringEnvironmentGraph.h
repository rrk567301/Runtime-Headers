@class NSString, NSMutableDictionary, NSMutableOrderedSet, BKSHIDEventDeferringEnvironment;

@interface BKEventDeferringEnvironmentGraph : NSObject <BSDescriptionStreamable, NSCopying> {
    NSMutableDictionary *_topLevelInEachProcess;
    BKSHIDEventDeferringEnvironment *_environment;
    NSMutableOrderedSet *_allNodes;
    NSMutableDictionary *_nodeByIdentity;
    NSMutableDictionary *_nodeByDeferringTarget;
    NSMutableDictionary *_selectionPathContainerByIdentifier;
    NSMutableDictionary *_modalityAssertionsByClientPID;
    NSMutableDictionary *_constraintAssertionsByClientPID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)describeDeliveryChain:(id)a0 identifier:(id)a1;
- (id)graphDescriptionWithLabel:(id)a0;

@end
