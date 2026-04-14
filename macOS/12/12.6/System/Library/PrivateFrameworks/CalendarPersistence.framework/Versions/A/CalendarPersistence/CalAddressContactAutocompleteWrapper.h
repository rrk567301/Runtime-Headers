@interface CalAddressContactAutocompleteWrapper : CalAddressRecordWrapper

- (id)result;
- (BOOL)isGroup;
- (id)firstName;
- (id)lastName;
- (id)principalPath;
- (id)initWithCNAutocompleteResult:(id)a0;
- (id)displayedName;
- (BOOL)isPerson;
- (BOOL)isLocation;
- (BOOL)isResource;

@end
