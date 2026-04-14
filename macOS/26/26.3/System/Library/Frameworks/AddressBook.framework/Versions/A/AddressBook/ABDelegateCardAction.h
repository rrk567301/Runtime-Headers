@class NSString;

@interface ABDelegateCardAction : NSObject <ABActionDelegate>

@property (readonly) id delegate;
@property (readonly) NSString *actionProperty;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)unlocalizedTitle;
- (void)performActionForPerson:(id)a0 identifier:(id)a1;
- (void)performActionForPerson:(id)a0 identifier:(id)a1 transitionProvider:(id)a2;
- (BOOL)shouldEnableActionForPerson:(id)a0 identifier:(id)a1;
- (id)titleForPerson:(id)a0 identifier:(id)a1;

@end
