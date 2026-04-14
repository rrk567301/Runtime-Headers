@class INIntentForwardingAction, INIntent;

@interface UISIntentForwardingAction : BSAction {
    INIntent *_cachedIntent;
    INIntentForwardingAction *_cachedIntentForwardingAction;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) INIntentForwardingAction *intentForwardingAction;

- (long long)UIActionType;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 reply:(id /* block */)a1;
- (id)initWithIntent:(id)a0 responseQueue:(id)a1 reply:(id /* block */)a2;
- (id)initWithIntentForwardingAction:(id)a0 responseHandler:(id /* block */)a1;
- (id)initWithIntentForwardingAction:(id)a0 responseQueue:(id)a1 responseHandler:(id /* block */)a2;

@end
