@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (id)splitterDeviceList;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)splitterState;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (id)init;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;

@end
