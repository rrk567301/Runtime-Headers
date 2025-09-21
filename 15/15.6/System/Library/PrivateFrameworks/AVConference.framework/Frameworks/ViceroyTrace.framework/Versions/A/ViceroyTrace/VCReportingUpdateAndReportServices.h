@interface VCReportingUpdateAndReportServices : NSObject

@property (readonly) char needToUpdate;
@property (readonly) char needToReport;
@property (copy) id /* block */ block;

- (void)dealloc;
- (id)initWithServiceBlock:(id /* block */)a0 needToUpdate:(char)a1 needToReport:(char)a2;

@end
