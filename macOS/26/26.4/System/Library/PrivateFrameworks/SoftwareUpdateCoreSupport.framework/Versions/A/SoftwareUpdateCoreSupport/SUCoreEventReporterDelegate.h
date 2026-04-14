@class NSString, SUCoreEventReporter;

@interface SUCoreEventReporterDelegate : NSObject <NSURLSessionDelegate>

@property (weak, nonatomic) SUCoreEventReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (id)initWithReporter:(id)a0;

@end
