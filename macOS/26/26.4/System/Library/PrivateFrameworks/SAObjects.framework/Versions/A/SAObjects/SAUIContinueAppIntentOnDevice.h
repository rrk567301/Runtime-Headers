@class SAUIAppIntentData;

@interface SAUIContinueAppIntentOnDevice : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAppIntentData *appIntentData;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
