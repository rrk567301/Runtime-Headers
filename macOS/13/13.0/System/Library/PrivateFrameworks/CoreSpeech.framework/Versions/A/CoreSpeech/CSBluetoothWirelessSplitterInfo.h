@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)splitterDeviceList;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (unsigned long long)splitterState;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;

@end
