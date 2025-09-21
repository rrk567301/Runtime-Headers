@class NSString, NSManagedObject, ABCDRecord;

@interface ABCDDateComponents : ABCDOwnedObject

@property (retain, nonatomic) NSManagedObject *contact;
@property long long day;
@property long long month;
@property long long year;
@property long long era;
@property char isLeapMonth;
@property (copy) NSString *calendarIdentifier;
@property (retain, nonatomic) ABCDRecord *owner;

- (id)components;
- (void)setComponents:(id)a0;
- (char)abHasAddressBookRelatedContent;

@end
