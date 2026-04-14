@class ADMonocularVideoExecutor, NSString;

@interface ADMonocularVideoFlow : ADFlow <ADFlowColorConsumer>

@property (readonly, retain, nonatomic) ADMonocularVideoExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
