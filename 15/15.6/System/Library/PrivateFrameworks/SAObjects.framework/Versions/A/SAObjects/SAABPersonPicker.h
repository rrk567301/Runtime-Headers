@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (copy, nonatomic) NSArray *persons;
@property (nonatomic) char showImmediately;

+ (id)personPicker;
+ (id)personPickerWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
