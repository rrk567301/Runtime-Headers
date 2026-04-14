@class CADStatCollectionContext, NSMutableArray;

@interface CADStatsCalendars : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_calendarInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (BOOL)calendarUsesAuthentication:(void *)a0;
- (void)prepareWithContext:(id)a0;
- (void)processCalendars:(id)a0 inStore:(void *)a1;
- (BOOL)wantsCalendars;

@end
