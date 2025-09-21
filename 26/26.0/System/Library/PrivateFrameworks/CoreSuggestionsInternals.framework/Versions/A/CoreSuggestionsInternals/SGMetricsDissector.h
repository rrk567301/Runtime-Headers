@class NSString, SGSqlEntityStore;

@interface SGMetricsDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    SGSqlEntityStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEntityStore:(id)a0;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (BOOL)_shouldSampleMessage;
- (void).cxx_destruct;

@end
