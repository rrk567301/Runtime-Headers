@class NSString;

@interface SAAppsAppSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationName;

+ (id)appSearch;
+ (id)appSearchWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
