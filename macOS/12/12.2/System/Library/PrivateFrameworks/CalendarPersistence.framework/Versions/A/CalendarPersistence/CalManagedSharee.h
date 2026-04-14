@class NSString, CalManagedCalDAVCalendar, NSURL, NSDictionary, NSManagedObjectID;

@interface CalManagedSharee : CalManagedObject <EKProtocolSharee>

@property (retain) CalManagedCalDAVCalendar *calendar;
@property (retain) NSString *address;
@property (retain) NSString *commonName;
@property (retain) NSString *status;
@property (retain) NSString *accessLevel;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)arrayOfShareesWithAddresses:(id)a0 inCalendar:(id)a1 inManagedObjectContext:(id)a2;

- (void)willSave;
- (id)enclosingSource;
- (void)processForType:(int)a0 inManagedObjectContext:(id)a1;
- (int)calDAVCalendarServerInviteStatus;
- (int)calDAVCalendarServerAccessLevel;
- (id)calDAVCalendarServerUserItem;

@end
