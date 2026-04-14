@class NSString, NSConditionLock;

@interface PrinterConfigure : NSObject {
    NSString *_uri;
    NSString *_product;
    NSString *_location;
    BOOL _ADOIsBinaryOK;
    NSConditionLock *_conditionLock;
    void *_context;
    id _delegate;
}

+ (id)PrinterConfigureWithPrinterURI:(id)a0;

- (void)dealloc;
- (id)description;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)location;
- (void *)context;
- (void)setURI:(id)a0;
- (id)uri;
- (void)setContext:(void *)a0;
- (void)setLocation:(id)a0;
- (id)product;
- (void)setProduct:(id)a0;
- (id)conditionLock;
- (id)ppds;
- (id)initWithPrinterURI:(id)a0;
- (void)autoSelectedThread:(id)a0;
- (BOOL)ADOIsBinaryOK;
- (void)SetADOIsBinaryOK:(BOOL)a0;
- (void)setConditionLock:(id)a0;
- (void)startConfigure;
- (void)stopConfigure;
- (void)autoSelectEvent:(id)a0;

@end
