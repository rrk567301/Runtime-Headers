@class NSString;

@interface ABActionEmailSearchSpotlight : NSObject {
    NSString *_actionProperty;
}

- (id)init;
- (id)unlocalizedTitle;
- (void).cxx_destruct;
- (id)actionProperty;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (void)setActionProperty:(id)a0;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
