@class SALocalSearchMapItem;

@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;
@property (nonatomic) char useNavigationDestination;

+ (id)shareLocationWithExternalAccessory;
+ (id)shareLocationWithExternalAccessoryWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
