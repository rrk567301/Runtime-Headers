@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) BOOL splitterEnabled;
@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;

- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (unsigned long long)splitterState;
- (id)splitterDeviceList;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)_hasDeviceTemporaryPairedNotInContacts;

@end
