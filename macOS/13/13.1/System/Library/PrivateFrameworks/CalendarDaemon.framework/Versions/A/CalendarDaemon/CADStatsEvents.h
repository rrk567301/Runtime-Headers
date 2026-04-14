@class NSMutableArray;

@interface CADStatsEvents : CADStatCollector {
    NSMutableArray *_eventInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)a0;
- (BOOL)wantsEvents;
- (void)processEvents:(id)a0;

@end
