@class NSString, NSManagedObject, ABCDRecord;

@interface ABCDDateComponents : ABCDOwnedObject

@property (retain, nonatomic) NSManagedObject *contact;
@property long long day;
@property long long month;
@property long long year;
@property long long era;
@property BOOL isLeapMonth;
@property (copy) NSString *calendarIdentifier;
@property (retain, nonatomic) ABCDRecord *owner;

- (void)setComponents:(id)a0;
- (id)components;
- (BOOL)abHasAddressBookRelatedContent;

@end
