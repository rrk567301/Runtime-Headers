@class NSString;

@interface ABDelegateCardAction : NSObject <ABActionDelegate>

@property (readonly) id delegate;
@property (readonly) NSString *actionProperty;

- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (id)initWithDelegate:(id)a0;
- (id)titleForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1 transitionProvider:(id)a2;

@end
