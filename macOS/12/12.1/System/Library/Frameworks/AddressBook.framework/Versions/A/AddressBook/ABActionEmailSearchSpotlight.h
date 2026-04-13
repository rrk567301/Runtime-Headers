@class NSString;

@interface ABActionEmailSearchSpotlight : NSObject {
    NSString *_actionProperty;
}

- (id)init;
- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (id)titleForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (id)actionProperty;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (void)setActionProperty:(id)a0;

@end
