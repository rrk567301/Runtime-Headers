@interface Email.EMGenerativeModelsAvailability : NSObject {
    void /* unknown type, empty encoding */ availability;
    void /* unknown type, empty encoding */ availabilityState;
    void /* unknown type, empty encoding */ availabilityNotification;
}

@property (class, nonatomic, readonly) BOOL isAvailable;
@property (class, nonatomic, readonly) BOOL isRestricted;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
