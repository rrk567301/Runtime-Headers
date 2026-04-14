@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (unsigned long long)splitterState;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (id)splitterDeviceList;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (id)init;

@end
