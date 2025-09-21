@class NSString, NSNumber;

@interface HAPRecentlySeenPairedBTLEPeripheralTuple : HMFObject {
    double _lastSeen;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char notifyingCharacteristicUpdated;
@property (nonatomic) char monitorState;
@property (nonatomic) unsigned long long connectionPriority;
@property (nonatomic) unsigned long long advertisementFormat;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSNumber *configNumber;
@property (retain, nonatomic) NSNumber *category;

- (id)description;
- (void).cxx_destruct;
- (void)updateWithPeripheral:(id)a0;
- (id)initRecentlySeenPairedHAPBLEPeripheral:(id)a0;
- (void)updatePairedPeripheralConfiguration:(char)a0 connectionPriority:(unsigned long long)a1;

@end
