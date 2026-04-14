@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (void).cxx_destruct;
- (unsigned int)type;
- (float)volume;
- (id)uniqueIdentifier;
- (id)contextID;
- (void)setVolume:(float)a0;
- (id)initWithUID:(id)a0;
- (id)outputDevices;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)resetPredictedOutputDevice;
- (id)predictedOutputDevice;
- (BOOL)isVolumeControlAvailable;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)supportsVolumeControl;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;

@end
