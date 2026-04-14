@class NSArray, ASDTAudioDevice, NSObject, NSMutableArray;
@protocol ASDTPMProtocol, OS_dispatch_queue;

@interface ASDTPMSequencer : NSObject

@property (weak, nonatomic) NSObject<ASDTPMProtocol> *parent;
@property (weak, nonatomic) ASDTAudioDevice *parentDevice;
@property (retain, nonatomic) NSArray *pmDevicesPowerUp;
@property (retain, nonatomic) NSMutableArray *mutablePMDevicesPowerUp;
@property (retain, nonatomic) NSArray *pmDevicesPowerDown;
@property (retain, nonatomic) NSMutableArray *mutablePMDevicesPowerDown;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pmConcurrentQueue;

+ (id)pmSequencerWithPMDeviceConfig:(id)a0 withParent:(id)a1;
+ (long long)compare:(id)a0 with:(id)a1 forPowerUp:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithPMDeviceConfig:(id)a0 withParent:(id)a1;
- (BOOL)doAddPMDeviceWithConfig:(id)a0;
- (void)sortPMDevices;
- (BOOL)addPMDeviceWithConfig:(id)a0;
- (int)executeSequenceFromState:(int)a0 toState:(int)a1;
- (int)executeSequenceToState:(int)a0;
- (id)pmDeviceWithName:(id)a0;

@end
