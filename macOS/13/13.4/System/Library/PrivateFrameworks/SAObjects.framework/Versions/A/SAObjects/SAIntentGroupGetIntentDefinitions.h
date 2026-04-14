@class NSArray;

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *queries;

+ (id)getIntentDefinitions;
+ (id)getIntentDefinitionsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
