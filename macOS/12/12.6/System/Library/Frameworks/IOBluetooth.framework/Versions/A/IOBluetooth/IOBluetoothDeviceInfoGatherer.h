@class IOBluetoothRFCOMMChannel, NSTimer, NSMutableData, IOBluetoothDevice;

@interface IOBluetoothDeviceInfoGatherer : NSObject {
    BOOL mInfoGathered;
    IOBluetoothDevice *mDevice;
    IOBluetoothRFCOMMChannel *mRFCOMMChannel;
    unsigned int mATCommandState;
    unsigned char mChannelID;
    NSMutableData *mPhoneGMI;
    NSMutableData *mPhoneGMM;
    NSMutableData *mPhoneManufacturer;
    NSMutableData *mPhoneModelNumber;
    NSMutableData *mPhoneRevisionID;
    NSMutableData *mPhoneIMSI;
    NSTimer *mATCommandTimer;
    char *mLastCommandPtr;
    SEL mProgressSelector;
    id mProgressSelectorTarget;
    BOOL mGetATCommandInfo;
    BOOL mGetSDPInfo;
    void *expansionData[4];
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)clearAllData;
- (void)connectionComplete:(id)a0 status:(int)a1;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)rfcommChannelData:(id)a0 data:(void *)a1 length:(unsigned long long)a2;
- (void)rfcommChannelOpenComplete:(id)a0 status:(int)a1;
- (void)rfcommChannelClosed:(id)a0;
- (void)postProgressToTarget:(int)a0;
- (void)startSDPQuery;
- (void)startDeviceInfoGatheringDelayed:(id)a0;
- (void)deviceInfoGatheringComplete;
- (void)startATCommandTimeout;
- (void)stopATCommandTimeout;
- (id)getManufacturer;
- (id)getModelNumber;
- (id)getRevision;
- (id)getIMSI;
- (id)getPhoneGMM;
- (id)getPhoneGMI;
- (void)ATCommandTimerFired;
- (void)processNextPhoneQuery;
- (id)initWithDevice:(id)a0 progressSelector:(SEL)a1 andTarget:(id)a2;
- (void)setProgressSelector:(SEL)a0 andTarget:(id)a1;
- (void)startDeviceInfoGathering;
- (void)setGetSDPInfo:(BOOL)a0;
- (void)setGetATCommandInfo:(BOOL)a0;
- (void)setOnlyGetSDPInfo:(BOOL)a0;

@end
