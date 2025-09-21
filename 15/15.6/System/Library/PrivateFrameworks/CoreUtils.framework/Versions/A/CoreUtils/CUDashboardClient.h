@class NSString;

@interface CUDashboardClient : NSObject

@property (copy, nonatomic) NSString *server;

- (void).cxx_destruct;
- (void)invalidate;
- (int)activate;
- (int)_logCStr:(const char *)a0 length:(unsigned long long)a1;
- (int)logJSON:(id)a0;
- (int)logf:(const char *)a0;
- (int)logv:(const char *)a0 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;

@end
