@class NSManagedObjectID;

@interface CalRemoteCalendarSource : CalManagedSource

@property (retain) NSManagedObjectID *calendarObjectID;
@property (readonly) BOOL isDelegate;
@property int sharingStatus;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)_calendar;
- (BOOL)isEditable;
- (BOOL)isMarkedImmutableSharees;
- (BOOL)isSubscription;
- (BOOL)isEditableForReply;

@end
