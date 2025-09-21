@interface SAQuickStop : SABaseClientBoundCommand

+ (id)quickStop;
+ (id)quickStopWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
