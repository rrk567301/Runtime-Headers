@class NSArray;

@interface SAEHandleUnderstandingOutput : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *policyActionList;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
