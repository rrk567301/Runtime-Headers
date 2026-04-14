@class NSString;

@interface ATXCarPlayConnectedStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_carPlayPublisherWithStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 shouldReverse:(BOOL)a3;
- (void)_enumerateEventsConnected:(BOOL)a0 startDate:(id)a1 endDate:(id)a2 filterBlock:(id /* block */)a3 limit:(unsigned long long)a4 ascending:(BOOL)a5 shouldContinue:(id /* block */)a6 block:(id /* block */)a7;
- (void)enumerateConnectedEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4 block:(id /* block */)a5;
- (void)enumerateConnectedEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4 shouldContinue:(id /* block */)a5 block:(id /* block */)a6;
- (void)enumerateDisconnectedEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4 block:(id /* block */)a5;
- (void)enumerateDisconnectedEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 limit:(unsigned long long)a3 ascending:(BOOL)a4 shouldContinue:(id /* block */)a5 block:(id /* block */)a6;

@end
