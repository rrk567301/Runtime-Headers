@class NSString;

@interface CADStatsCallback : CADStatCollector {
    NSString *_eventName;
    id /* block */ _callback;
}

- (id)eventName;
- (void).cxx_destruct;
- (id)eventDictionaries;
- (id)initWithEventName:(id)a0 callback:(id /* block */)a1;

@end
