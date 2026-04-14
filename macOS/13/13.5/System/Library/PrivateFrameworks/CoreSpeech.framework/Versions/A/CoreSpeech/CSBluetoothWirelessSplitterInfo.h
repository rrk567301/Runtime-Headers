@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (id)splitterDeviceList;
- (unsigned long long)splitterState;

@end
