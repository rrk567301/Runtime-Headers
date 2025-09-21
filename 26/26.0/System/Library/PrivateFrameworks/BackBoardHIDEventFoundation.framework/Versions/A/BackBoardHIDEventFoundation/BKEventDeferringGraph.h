@class NSString, NSMutableDictionary, NSSet;

@interface BKEventDeferringGraph : NSObject <BSDescriptionStreamable> {
    NSMutableDictionary *_identityToGraph;
    NSMutableDictionary *_pidToRules;
    NSSet *_senderDisplays;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)describeDeliveryChains:(id)a0 identifier:(id)a1;

@end
