@class PKAccount;

@interface _PKAccountDeviceEventReporter : NSObject {
    void /* unknown type, empty encoding */ paymentWebService;
}

@property (nonatomic, readonly) PKAccount *account;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 paymentWebService:(id)a1;
- (void)reportEventIfNecessary:(long long)a0 location:(id)a1 completion:(id /* block */)a2;

@end
