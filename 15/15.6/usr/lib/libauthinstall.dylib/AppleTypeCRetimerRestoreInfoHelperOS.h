@interface AppleTypeCRetimerRestoreInfoHelperOS : NSObject {
    void /* function */ *_logFunction;
    void *_logContext;
    char _verbose;
}

- (void)log:(id)a0;
- (void)logInternal:(id)a0 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (void)verboseLog:(id)a0;

@end
