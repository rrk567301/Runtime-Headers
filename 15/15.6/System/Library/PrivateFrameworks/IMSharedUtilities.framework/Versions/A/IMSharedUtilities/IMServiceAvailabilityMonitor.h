@interface IMServiceAvailabilityMonitor : NSObject <IMServiceAvailabilityMonitoring> {
    void /* unknown type, empty encoding */ mmsEnabled;
    void /* unknown type, empty encoding */ rcsEnabled;
    void /* unknown type, empty encoding */ mmsToken;
}

@property (nonatomic, readonly) char isiMessageEnabled;
@property (nonatomic, readonly) char isRCSEnabled;
@property (nonatomic, readonly) char isMMSEnabled;

- (id)init;
- (void).cxx_destruct;

@end
