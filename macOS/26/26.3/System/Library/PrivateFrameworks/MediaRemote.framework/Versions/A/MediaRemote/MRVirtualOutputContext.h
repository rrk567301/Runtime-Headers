@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)supportsVolumeControl;
- (id)initWithUID:(id)a0;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (id)predictedOutputDevice;
- (id)uniqueIdentifier;
- (void)setVolume:(float)a0;
- (float)volume;
- (unsigned int)type;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)outputDevices;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)contextID;
- (BOOL)isVolumeControlAvailable;
- (void).cxx_destruct;
- (void)resetPredictedOutputDevice;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;

@end
