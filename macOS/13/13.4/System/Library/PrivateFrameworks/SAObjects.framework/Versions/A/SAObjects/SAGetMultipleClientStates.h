@class NSArray;

@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientStateGetters;

+ (id)getMultipleClientStates;
+ (id)getMultipleClientStatesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
