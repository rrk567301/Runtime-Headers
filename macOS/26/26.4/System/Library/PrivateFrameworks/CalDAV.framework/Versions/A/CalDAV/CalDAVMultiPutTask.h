@class NSDictionary;

@interface CalDAVMultiPutTask : CoreDAVMultiPutTask

@property (readonly, nonatomic) NSDictionary *uuidsToAddActions;
@property (readonly, nonatomic) NSDictionary *hrefsToModDeleteActions;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 checkCTag:(id)a1 uuidsToAddActions:(id)a2 hrefsToModDeleteActions:(id)a3;

@end
