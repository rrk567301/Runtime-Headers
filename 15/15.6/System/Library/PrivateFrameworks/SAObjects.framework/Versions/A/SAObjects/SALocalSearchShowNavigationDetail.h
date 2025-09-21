@interface SALocalSearchShowNavigationDetail : SADomainCommand

+ (id)showNavigationDetail;
+ (id)showNavigationDetailWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
