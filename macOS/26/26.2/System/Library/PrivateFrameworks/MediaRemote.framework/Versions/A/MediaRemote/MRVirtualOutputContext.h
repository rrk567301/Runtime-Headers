@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (id)uniqueIdentifier;
- (void)resetPredictedOutputDevice;
- (id)contextID;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (unsigned int)type;
- (void).cxx_destruct;
- (float)volume;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (id)predictedOutputDevice;
- (BOOL)isVolumeControlAvailable;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (id)outputDevices;
- (void)setVolume:(float)a0;
- (BOOL)supportsVolumeControl;
- (id)initWithUID:(id)a0;

@end
