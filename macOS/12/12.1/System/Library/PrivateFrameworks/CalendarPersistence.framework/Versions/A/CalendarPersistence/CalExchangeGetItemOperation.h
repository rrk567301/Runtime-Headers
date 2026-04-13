@class NSArray, EWSFolderIdType, NSString;

@interface CalExchangeGetItemOperation : CalExchangeOperation {
    NSArray *_itemIds;
    EWSFolderIdType *_folderId;
    NSString *_messageTracerUID;
}

+ (id)iCalendarDateFormatter;
+ (id)iCalendarDateTimeFormatter;

- (void)dealloc;
- (id)itemIds;
- (id)folderId;
- (id)initWithSession:(id)a0 itemIds:(id)a1 inFolder:(id)a2 messageTracerUID:(id)a3;
- (id)initWithSession:(id)a0 itemIds:(id)a1 inFolder:(id)a2;
- (id)_dayFromEWSDayOfWeekType:(long long)a0;
- (void)updateAlarmsForCalendarItem:(id)a0 inCalendar:(id)a1 withItem:(id)a2;
- (void)updateRecurrenceForManagedCalendarItem:(id)a0 withCalendarItem:(id)a1;

@end
