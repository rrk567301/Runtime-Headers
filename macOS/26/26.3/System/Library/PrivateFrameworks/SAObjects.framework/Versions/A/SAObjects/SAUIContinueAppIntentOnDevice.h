@class SAUIAppIntentData;

@interface SAUIContinueAppIntentOnDevice : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAppIntentData *appIntentData;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
