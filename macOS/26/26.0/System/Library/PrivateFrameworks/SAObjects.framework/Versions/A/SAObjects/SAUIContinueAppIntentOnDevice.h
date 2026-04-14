@class SAUIAppIntentData;

@interface SAUIContinueAppIntentOnDevice : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAppIntentData *appIntentData;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
