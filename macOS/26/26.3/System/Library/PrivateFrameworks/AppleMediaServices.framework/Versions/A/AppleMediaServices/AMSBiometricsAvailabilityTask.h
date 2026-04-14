@class AMSDaemonConnection;

@interface AMSBiometricsAvailabilityTask : NSObject {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ purpose;
}

@property (nonatomic, readonly) AMSDaemonConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (id)perform;
- (id)initWithAccount:(id)a0 forSignaturePurpose:(unsigned long long)a1;

@end
