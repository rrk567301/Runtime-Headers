@class NSURL, NSMutableSet, NSString;

@interface CalDAVAddSubscriptionCalendarQueueableOperation : CalDAVCalendarQueueableOperation <CoreDAVMkcolTaskDelegate>

@property (retain) NSMutableSet *propertiesToSet;
@property (retain) NSMutableSet *fallbackProperties;
@property (retain) NSURL *calendarURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subscribedCalendarPropertiesWithDisplayName:(id)a0 color:(id)a1 symbolicColorName:(id)a2 order:(unsigned long long)a3 notes:(id)a4 subscriptionURLString:(id)a5 refreshInterval:(unsigned long long)a6 hasAlarmFilter:(BOOL)a7 hasAttachmentFilter:(BOOL)a8 hasTaskFilter:(BOOL)a9 locationCode:(id)a10 languageCode:(id)a11 isAutoProvisioned:(BOOL)a12 fallbackProperties:(id)a13;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 andSession:(id)a1;

@end
