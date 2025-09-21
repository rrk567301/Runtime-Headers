@class NSString;

@interface EWSCalendarEventDetails : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *Subject;
@property (copy, nonatomic) NSString *Location;
@property (nonatomic) char IsMeeting;
@property (nonatomic) char IsRecurring;
@property (nonatomic) char IsException;
@property (nonatomic) char IsReminderSet;
@property (nonatomic) char IsPrivate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
