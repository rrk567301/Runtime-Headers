@interface SAMacStartScreenSaver : SADomainCommand

+ (id)startScreenSaver;
+ (id)startScreenSaverWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
