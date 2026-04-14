@class NSString, NSDictionary, NSDate, NSNumber, NSManagedObjectID;
@protocol EventOccurrenceModelProtocol, CalendarSourceModelProtocol;

@interface EKFrozenCalendarNotification : EKFrozenObject <EKProtocolCalendarNotification>

@property (readonly) NSString *uuid;
@property (readonly, nonatomic) NSNumber *notificationType;
@property (readonly, nonatomic) NSString *componentType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSNumber *senders;
@property (readonly) NSString *attendeeComment;
@property (readonly) NSString *filename;
@property (readonly) NSNumber *createdCount;
@property (readonly) NSNumber *updatedCount;
@property (readonly) NSNumber *deletedCount;
@property (readonly, nonatomic) NSDate *proposedStartDateUnadjustedFromUTC;
@property (readonly, nonatomic) NSDate *proposedEndDateUnadjustedFromUTC;
@property (readonly, nonatomic) BOOL dateChanged;
@property (readonly, nonatomic) BOOL timeChanged;
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL attachmentsChanged;
@property (readonly, nonatomic) BOOL videoConferenceChanged;
@property (readonly) NSString *calendarName;
@property (readonly, nonatomic) NSString *principalName;
@property (readonly, nonatomic) id<EventOccurrenceModelProtocol> occurrence;
@property (readonly, nonatomic) id<CalendarSourceModelProtocol> containerSource;
@property (readonly) BOOL dismissed;
@property (readonly, nonatomic) unsigned long long junkStatus;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)meltedClass;
+ (id)frozenObjectForObject:(id)a0 createPartialObject:(BOOL)a1 preFrozenRelationshipObjects:(id)a2 forceUpdate:(BOOL)a3;
+ (Class)_realClassForNotification:(id)a0;

@end
