@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (void)resetPredictedOutputDevice;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (unsigned int)type;
- (BOOL)supportsVolumeControl;
- (id)initWithUID:(id)a0;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (id)outputDevices;
- (id)predictedOutputDevice;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)contextID;
- (BOOL)isVolumeControlAvailable;
- (void)setVolume:(float)a0;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)uniqueIdentifier;
- (float)volume;
- (void).cxx_destruct;

@end
