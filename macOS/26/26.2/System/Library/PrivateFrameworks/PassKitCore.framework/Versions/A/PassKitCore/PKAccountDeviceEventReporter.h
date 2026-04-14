@class PKAccount, _PKAccountDeviceEventReporter;

@interface PKAccountDeviceEventReporter : NSObject {
    _PKAccountDeviceEventReporter *_eventReporter;
}

@property (readonly, nonatomic) PKAccount *account;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 paymentWebService:(id)a1;
- (void)reportEventIfNecessary:(long long)a0 completion:(id /* block */)a1;
- (void)reportEventIfNecessary:(long long)a0 location:(id)a1 completion:(id /* block */)a2;

@end
