@class NSArray;

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter

@property (retain) NSArray *backends;
@property char allBackendsAllowConcurrentAccess;

- (void).cxx_destruct;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (char)allowsConcurrentAccess;
- (id)initWithBackends:(id)a0;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a6;

@end
