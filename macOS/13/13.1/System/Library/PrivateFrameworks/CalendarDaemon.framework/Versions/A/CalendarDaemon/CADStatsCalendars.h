@class CADStatCollectionContext, NSMutableArray;

@interface CADStatsCalendars : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_calendarInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)a0;
- (BOOL)wantsCalendars;
- (void)processCalendars:(id)a0 inStore:(void *)a1;
- (BOOL)calendarUsesAuthentication:(void *)a0;

@end
