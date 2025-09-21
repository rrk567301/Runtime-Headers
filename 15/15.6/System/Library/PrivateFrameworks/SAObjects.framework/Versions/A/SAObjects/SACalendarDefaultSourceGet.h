@interface SACalendarDefaultSourceGet : SADomainCommand

+ (id)defaultSourceGet;
+ (id)defaultSourceGetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
