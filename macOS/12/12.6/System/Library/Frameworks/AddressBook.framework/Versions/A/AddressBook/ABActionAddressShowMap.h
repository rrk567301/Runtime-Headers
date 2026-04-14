@interface ABActionAddressShowMap : NSObject

- (id)titleForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (id)actionProperty;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1 transitionProvider:(id)a2;

@end
