@class SAUIAppIntentData;

@interface SAUIContinueAppIntentOnDevice : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAppIntentData *appIntentData;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
