@class DiagnosticCase, NSObject;
@protocol OS_dispatch_queue, DiagnosticReportGeneratorDelegate;

@interface DiagnosticReportGenerator : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeoutSeconds;
@property (nonatomic) char reportGenerated;
@property (weak, nonatomic) id<DiagnosticReportGeneratorDelegate> delegate;
@property (retain, nonatomic) DiagnosticCase *diagCase;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)setDefaults;
- (char)generateReportForCase:(id)a0 reportName:(id)a1;
- (char)generateReportForCase:(id)a0 reportName:(id)a1 completion:(id /* block */)a2;
- (char)startReportGeneration;

@end
