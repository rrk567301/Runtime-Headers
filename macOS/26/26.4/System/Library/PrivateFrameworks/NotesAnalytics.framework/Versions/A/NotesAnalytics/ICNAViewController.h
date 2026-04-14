@class NSView, ICNAEventReporter;

@interface ICNAViewController : NSViewController

@property (retain, nonatomic) ICNAEventReporter *eventReporter;
@property (readonly, nonatomic) NSView *viewForEventReporter;
@property (readonly, nonatomic) NSView *viewForEventReporterIfLoaded;

- (void).cxx_destruct;
- (void)dealloc;
- (void)eventReporterLostSession:(id)a0;

@end
