@interface UpdateAndReportServices : NSObject

@property (readonly) char update;
@property (readonly) char report;
@property (copy) id /* block */ block;

- (void)dealloc;
- (id)initWithServices:(char)a0 needToReport:(char)a1 service:(id /* block */)a2;

@end
