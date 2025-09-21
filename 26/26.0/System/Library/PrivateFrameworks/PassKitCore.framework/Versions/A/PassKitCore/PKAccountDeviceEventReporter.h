@class _PKAccountDeviceEventReporter;

@interface PKAccountDeviceEventReporter : NSObject {
    _PKAccountDeviceEventReporter *_eventReporter;
}

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)reportEventIfNecessary:(long long)a0 completion:(id /* block */)a1;
- (void)reportEventIfNecessary:(long long)a0 location:(id)a1 completion:(id /* block */)a2;

@end
