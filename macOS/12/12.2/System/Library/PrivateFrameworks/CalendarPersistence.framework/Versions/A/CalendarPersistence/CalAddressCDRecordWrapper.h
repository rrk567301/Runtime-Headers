@interface CalAddressCDRecordWrapper : CalAddressRecordWrapper

- (BOOL)isGroup;
- (id)firstName;
- (id)lastName;
- (id)record;
- (id)principalPath;
- (id)displayedName;
- (id)cuAddress;
- (BOOL)isPerson;
- (BOOL)isLocation;
- (BOOL)isResource;
- (id)initWithPrincipalResult:(id)a0;

@end
