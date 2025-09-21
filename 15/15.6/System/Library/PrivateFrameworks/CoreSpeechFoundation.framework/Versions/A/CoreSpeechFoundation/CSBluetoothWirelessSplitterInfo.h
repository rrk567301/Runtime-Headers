@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}

@property (nonatomic) char splitterEnabled;
@property (readonly, nonatomic) char shouldDisableSpeakerVerificationInSplitterMode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)splitterState;
- (char)_hasDeviceTemporaryPairedNotInContacts;
- (void)addDeviceIntoSplitterDeviceList:(id)a0;
- (id)splitterDeviceList;

@end
