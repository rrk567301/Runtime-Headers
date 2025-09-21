@interface WDProtocolAutomationSessionPermissionData : RWIProtocolJSONObject

@property (nonatomic) long long permission;
@property (nonatomic) char value;

- (id)initWithPayload:(id)a0;
- (id)initWithPermission:(long long)a0 value:(char)a1;
- (id)initWithProtocolObject:(id)a0;

@end
