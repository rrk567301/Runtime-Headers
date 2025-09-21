@class NSString;

@interface SAAppsAppSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationName;

+ (id)appSearchWithDictionary:(id)a0 context:(id)a1;
+ (id)appSearch;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
