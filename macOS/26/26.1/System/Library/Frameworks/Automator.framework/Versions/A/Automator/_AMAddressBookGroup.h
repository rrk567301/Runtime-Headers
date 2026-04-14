@class NSString;

@interface _AMAddressBookGroup : _AMAddressBookEntry

@property (copy) NSString *name;

- (id)people;
- (id)groups;

@end
