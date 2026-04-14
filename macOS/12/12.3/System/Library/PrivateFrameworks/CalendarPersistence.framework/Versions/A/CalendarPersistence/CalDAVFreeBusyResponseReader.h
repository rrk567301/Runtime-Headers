@class NSMutableData, NSDictionary, CALTimeRange;

@interface CalDAVFreeBusyResponseReader : NSObject {
    NSMutableData *_readData;
    NSDictionary *_freeBusySpans;
    CALTimeRange *_timeRange;
}

+ (id)freeBusySpanForPeriod:(id)a0 type:(unsigned long long)a1;
+ (id)calculateFreeBusySpansWithProperties:(id)a0;
+ (void)addSuccessFreeBusySpansToDictionary:(id)a0 fromICS:(id)a1;
+ (void)addErrorFreeBusySpanToDictionary:(id)a0 recipient:(id)a1 range:(id)a2 type:(int)a3;
+ (id)eventDetailArrayFromICS:(id)a0;

- (void).cxx_destruct;
- (id)initWithRange:(id)a0;
- (id)freeBusySpans;

@end
