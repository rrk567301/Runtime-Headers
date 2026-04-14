@class CoreIRDevice;

@interface CoreIRBus : CoreRCBus

@property (retain, nonatomic) CoreIRDevice *lastAppleRemote;
@property (retain, nonatomic) CoreIRDevice *pairedAppleRemote;

+ (BOOL)supportsSecureCoding;

- (BOOL)deleteDevice:(id)a0 error:(id *)a1;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)mergeProperties;
- (id)addDeviceWithType:(unsigned long long)a0 matching:(id)a1 error:(id *)a2;
- (id)addDeviceWithType:(unsigned long long)a0 matching:(id)a1 learningSession:(id)a2 error:(id *)a3;
- (void)didDispatchCommandFromAppleRemote:(id)a0;
- (id)initWithBus:(id)a0;
- (BOOL)setPairedAppleRemote:(id)a0 error:(id *)a1;
- (void)willRemoveDevice:(id)a0;

@end
