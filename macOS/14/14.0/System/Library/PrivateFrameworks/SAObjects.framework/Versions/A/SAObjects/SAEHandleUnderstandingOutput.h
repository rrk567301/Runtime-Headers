@class NSArray;

@interface SAEHandleUnderstandingOutput : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *policyActionList;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
