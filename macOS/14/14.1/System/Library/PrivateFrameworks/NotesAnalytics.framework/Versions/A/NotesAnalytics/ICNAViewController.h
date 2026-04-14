@class ICNAEventReporter;

@interface ICNAViewController : NSViewController

@property (retain, nonatomic) ICNAEventReporter *eventReporter;

- (void)dealloc;
- (void).cxx_destruct;
- (void)eventReporterLostSession:(id)a0;

@end
