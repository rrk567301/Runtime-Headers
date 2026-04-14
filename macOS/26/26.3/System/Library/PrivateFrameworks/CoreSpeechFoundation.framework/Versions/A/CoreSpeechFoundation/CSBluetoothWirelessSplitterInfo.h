@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (id)splitterDeviceList;
- (unsigned long long)splitterState;
- (id)description;
- (id)init;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;
- (void).cxx_destruct;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;

@end
