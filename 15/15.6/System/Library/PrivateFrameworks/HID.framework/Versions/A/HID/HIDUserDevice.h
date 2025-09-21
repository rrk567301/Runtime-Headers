@interface HIDUserDevice : NSObject {
    struct __IOHIDUserDevice { } *_device;
    id /* block */ _getReportHandler;
    id /* block */ _setReportHandler;
    unsigned int _service;
    id /* block */ _cancelHandler;
}

@property (readonly) unsigned int service;

- (void)dealloc;
- (id)description;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (char)setProperty:(id)a0 forKey:(id)a1;
- (void)activate;
- (void)cancel;
- (id)initWithProperties:(id)a0;
- (void)setDispatchQueue:(id)a0;
- (void)setCancelHandler:(id /* block */)a0;
- (char)handleReport:(id)a0 error:(out id *)a1;
- (char)handleReport:(id)a0 withTimestamp:(unsigned long long)a1 error:(out id *)a2;
- (void)setGetReportHandler:(id /* block */)a0;
- (void)setSetReportHandler:(id /* block */)a0;

@end
