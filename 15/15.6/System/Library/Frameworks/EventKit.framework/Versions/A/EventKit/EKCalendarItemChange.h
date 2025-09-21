@class EKObjectID, NSString;

@interface EKCalendarItemChange : EKObjectChange

@property (readonly, nonatomic) EKObjectID *calendarID;
@property (readonly, nonatomic) EKObjectID *oldCalendarID;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *oldExternalID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) char titleChanged;
@property (readonly, nonatomic) char locationChanged;
@property (readonly, nonatomic) char startDateChanged;
@property (readonly, nonatomic) char startTimezoneChanged;
@property (readonly, nonatomic) char endDateChanged;
@property (readonly, nonatomic) char endTimezoneChanged;
@property (readonly, nonatomic) char notesChanged;
@property (readonly, nonatomic) char allDayChanged;
@property (readonly, nonatomic) char suppressNotificationForChanges;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
