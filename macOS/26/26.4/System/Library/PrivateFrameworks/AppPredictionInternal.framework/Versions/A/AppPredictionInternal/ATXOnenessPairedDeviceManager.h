@class NSString;

@interface ATXOnenessPairedDeviceManager : NSObject {
    void /* unknown type, empty encoding */ companionDeviceManager;
    void /* unknown type, empty encoding */ lastKnownPairedDeviceIdentifierLock;
    void /* unknown type, empty encoding */ task;
}

@property (class, nonatomic, readonly) ATXOnenessPairedDeviceManager *sharedManager;

@property (nonatomic, readonly) NSString *pairedDeviceIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
