@interface BanyanUARPUpdaterLog : NSObject {
    void /* function */ *_logFunction;
    void *_logContext;
    BOOL _verbose;
}

- (void)log:(id)a0;
- (void)logInternal:(id)a0 arguments:(char *)a1;
- (void)verboseLog:(id)a0;
- (id)initWithlogFunction:(void /* function */ *)a0 logContext:(void *)a1;

@end
