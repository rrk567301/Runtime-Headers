@class NSArray;

@interface MRSyncOutputDevicesMessage : MRProtocolMessage {
    NSArray *_outputDevices;
}

@property (readonly, nonatomic) NSArray *outputDevices;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithOutputDevices:(id)a0 forClientWithDeviceInfo:(id)a1;
- (BOOL)shouldVerboselyLog;

@end
