@class NSString;

@interface ATXChargerPluggedInStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_chargerPluggedInPublisherWithStartDate:(id)a0 endDate:(id)a1;
- (void)enumeratePluggedInEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 limit:(unsigned long long)a3 block:(id /* block */)a4;

@end
