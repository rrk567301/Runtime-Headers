@interface IMServiceAvailabilityMonitor : NSObject <IMServiceAvailabilityMonitoring> {
    void /* unknown type, empty encoding */ mmsEnabled;
    void /* unknown type, empty encoding */ rcsEnabled;
    void /* unknown type, empty encoding */ mmsToken;
}

@property (nonatomic, readonly) BOOL isiMessageEnabled;
@property (nonatomic, readonly) BOOL isRCSEnabled;
@property (nonatomic, readonly) BOOL isMMSEnabled;

- (void).cxx_destruct;
- (id)init;

@end
