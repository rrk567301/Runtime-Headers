@class NSArray;

@interface SANPSkipToPreviousItem : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)skipToPreviousItem;
+ (id)skipToPreviousItemWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
