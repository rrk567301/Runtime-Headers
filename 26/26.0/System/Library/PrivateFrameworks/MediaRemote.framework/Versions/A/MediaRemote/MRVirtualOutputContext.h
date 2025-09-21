@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (BOOL)supportsVolumeControl;
- (void)resetPredictedOutputDevice;
- (void)setVolume:(float)a0;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)predictedOutputDevice;
- (BOOL)isVolumeControlAvailable;
- (id)contextID;
- (unsigned int)type;
- (float)volume;
- (id)outputDevices;
- (id)uniqueIdentifier;
- (id)initWithUID:(id)a0;
- (void).cxx_destruct;

@end
