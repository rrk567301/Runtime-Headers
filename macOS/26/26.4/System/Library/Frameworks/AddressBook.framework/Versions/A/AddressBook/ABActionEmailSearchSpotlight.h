@class NSString;

@interface ABActionEmailSearchSpotlight : NSObject {
    NSString *_actionProperty;
}

- (void).cxx_destruct;
- (id)init;
- (id)unlocalizedTitle;
- (id)actionProperty;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (void)setActionProperty:(id)a0;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
