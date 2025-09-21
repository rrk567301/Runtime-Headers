@class NSString;

@interface ATXAppClipUsageStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)_launchReasonFromString:(id)a0;
- (id)_publisherWithStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3;
- (void)enumerateAppClipUsageEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4 block:(id /* block */)a5;

@end
