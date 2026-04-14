@class NSString, NSMutableArray;

@interface MRVirtualOutputContext : MRAVOutputContext {
    NSString *_uniqueIdentifier;
    NSMutableArray *_outputDevices;
}

- (BOOL)isVolumeControlAvailable;
- (id)predictedOutputDevice;
- (id)uniqueIdentifier;
- (void)resetPredictedOutputDevice;
- (id)initWithUID:(id)a0;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (float)volume;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setVolume:(float)a0;
- (BOOL)supportsVolumeControl;
- (id)contextID;
- (id)outputDevices;
- (void).cxx_destruct;
- (unsigned int)type;

@end
