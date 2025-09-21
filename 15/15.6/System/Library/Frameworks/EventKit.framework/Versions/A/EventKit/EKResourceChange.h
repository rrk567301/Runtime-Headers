@class EKCalendar, NSString, NSURL, NSDate, NSNumber, EKCalendarItem;

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (readonly, retain, nonatomic) EKCalendar *calendar;
@property (readonly, retain, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, copy, nonatomic) NSString *changedByDisplayName;
@property (readonly, copy, nonatomic) NSURL *changedByAddress;
@property (readonly, copy, nonatomic) NSString *changedByFirstName;
@property (readonly, copy, nonatomic) NSString *changedByLastName;
@property (readonly, nonatomic) unsigned int changeType;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) char dateChanged;
@property (readonly, nonatomic) char timeChanged;
@property (readonly, nonatomic) char titleChanged;
@property (readonly, nonatomic) char locationChanged;
@property (readonly, nonatomic) NSNumber *createCount;
@property (readonly, nonatomic) NSNumber *updateCount;
@property (readonly, nonatomic) NSNumber *deleteCount;
@property (readonly, nonatomic) NSString *deletedTitle;
@property (readonly, nonatomic) char alerted;
@property (readonly, nonatomic) unsigned int publicStatus;
@property (readonly, nonatomic) char isCurrentUserForSharing;
@property (readonly, nonatomic) char isCurrentUserForScheduling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calendarItemPropertyName;
+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipWeakKeys;

- (id)name;
- (id)URL;
- (id)phoneNumber;
- (id)firstName;
- (id)notification;
- (id)emailAddress;
- (id)lastName;
- (unsigned int)changedProperties;
- (char)_propertyWithFlagDidChange:(unsigned int)a0;
- (void)clearAlertedStatus;

@end
