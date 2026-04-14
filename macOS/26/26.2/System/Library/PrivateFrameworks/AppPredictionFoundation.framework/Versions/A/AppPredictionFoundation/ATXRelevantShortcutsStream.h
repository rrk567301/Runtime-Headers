@class NSString;

@interface ATXRelevantShortcutsStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_relevantShortcutsPublisherWithStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2;
- (id)atx_efficientRelevantShortcut:(id)a0;
- (void)enumerateEventsFromStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 block:(id /* block */)a3;

@end
