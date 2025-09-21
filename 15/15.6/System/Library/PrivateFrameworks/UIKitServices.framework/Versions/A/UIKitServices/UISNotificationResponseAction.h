@class UNNotificationResponse;

@interface UISNotificationResponseAction : BSAction

@property (readonly, retain, nonatomic) UNNotificationResponse *response;
@property (readonly, nonatomic) char isLocal;
@property (readonly, nonatomic) char isRemote;
@property (readonly, nonatomic) char isDefaultAction;

- (char)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)_trigger;
- (id)initWithResponse:(id)a0 withHandler:(id /* block */)a1;
- (long long)UIActionType;

@end
