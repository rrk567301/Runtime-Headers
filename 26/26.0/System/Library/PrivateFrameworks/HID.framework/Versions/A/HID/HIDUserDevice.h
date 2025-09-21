@interface HIDUserDevice : NSObject {
    struct __IOHIDUserDevice { } *_device;
    id /* block */ _getReportHandler;
    id /* block */ _setReportHandler;
    unsigned int _service;
    id /* block */ _cancelHandler;
}

@property (readonly) unsigned int service;

- (void)setCancelHandler:(id /* block */)a0;
- (id)initWithProperties:(id)a0;
- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (void)cancel;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDispatchQueue:(id)a0;
- (id)description;
- (void)activate;
- (void).cxx_destruct;
- (BOOL)handleReport:(id)a0 error:(out id *)a1;
- (BOOL)handleReport:(id)a0 withTimestamp:(unsigned long long)a1 error:(out id *)a2;
- (void)setGetReportHandler:(id /* block */)a0;
- (void)setSetReportHandler:(id /* block */)a0;

@end
