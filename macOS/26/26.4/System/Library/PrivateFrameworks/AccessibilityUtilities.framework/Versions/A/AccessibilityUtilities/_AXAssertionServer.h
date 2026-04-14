@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject

@property (retain, nonatomic) NSMutableDictionary *heldAssertionMap;
@property (copy, nonatomic) id /* block */ assertionWasAcquiredHandler;
@property (copy, nonatomic) id /* block */ assertionWasReleasedHandler;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)addHeldAssertionOfType:(id)a0 byClient:(id)a1;
- (id)clientsHoldingAssertionOfType:(id)a0;
- (void)removeHeldAssertionOfType:(id)a0 byClient:(id)a1;

@end
