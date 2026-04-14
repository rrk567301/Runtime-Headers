@class NSArray;

@interface MRSyncOutputDevicesMessage : MRProtocolMessage {
    NSArray *_outputDevices;
}

@property (readonly, nonatomic) NSArray *outputDevices;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithOutputDevices:(id)a0 forClientWithDeviceInfo:(id)a1;
- (BOOL)shouldVerboselyLog;

@end
