@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {
    id /* block */ _aggregationBlock;
}

- (void)dealloc;
- (void)sendMessageToClient:(id)a0 timestamp:(double)a1 category:(unsigned short)a2 type:(unsigned short)a3 payload:(id)a4;
- (id)initWithAggregationBlock:(id /* block */)a0;

@end
