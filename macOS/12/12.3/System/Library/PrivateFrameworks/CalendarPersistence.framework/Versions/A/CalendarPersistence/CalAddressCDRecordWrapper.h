@interface CalAddressCDRecordWrapper : CalAddressRecordWrapper

- (BOOL)isGroup;
- (id)record;
- (id)firstName;
- (id)lastName;
- (id)principalPath;
- (id)displayedName;
- (id)cuAddress;
- (BOOL)isPerson;
- (BOOL)isLocation;
- (BOOL)isResource;
- (id)initWithPrincipalResult:(id)a0;

@end
