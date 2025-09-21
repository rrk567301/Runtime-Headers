@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)splitterState;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (id)splitterDeviceList;
- (void).cxx_destruct;

@end
