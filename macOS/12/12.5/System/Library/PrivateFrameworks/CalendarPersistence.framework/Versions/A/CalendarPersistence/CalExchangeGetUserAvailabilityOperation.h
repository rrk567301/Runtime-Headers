@class NSArray, NSMutableDictionary, CalDateRange, NSString, NSDate;

@interface CalExchangeGetUserAvailabilityOperation : NSObject {
    NSArray *_addresses;
    CalDateRange *_timeRange;
    NSString *_maskedSharedUID;
    NSString *_messageTracerUID;
    NSDate *_messageTracerStartDate;
}

@property (readonly) NSMutableDictionary *emailToFreeBusySpans;
@property (readonly) NSMutableDictionary *emailToEventDetailsArray;

+ (id)_UTCSerializableTimeZone;
+ (int)_calFreeBusyFromEWSFreeBusy:(long long)a0;
+ (int)_calFreeBusyFromMergedFreeBusy:(unsigned short)a0;

- (void)dealloc;
- (id)initWithMaskedSharedUID:(id)a0 addresses:(id)a1 timeRange:(id)a2;
- (BOOL)executeSynchronouslyWithPrincipal:(id)a0 withError:(id *)a1;
- (void)_processResponse:(id)a0;
- (id)_busySpan:(int)a0 startComponents:(id)a1 endComponents:(id)a2 inCalendar:(id)a3;
- (id)_busySpan:(int)a0 forDate:(id)a1 startsInMinutes:(unsigned long long)a2 endsInMinutes:(unsigned long long)a3 inCalendar:(id)a4;

@end
