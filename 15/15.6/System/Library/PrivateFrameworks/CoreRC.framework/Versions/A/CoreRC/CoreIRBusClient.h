@interface CoreIRBusClient : CoreIRBus

+ (char)supportsSecureCoding;

- (Class)classForCoder;
- (id)addDeviceWithType:(unsigned long long)a0 matching:(id)a1 error:(id *)a2;
- (id)addDeviceWithType:(unsigned long long)a0 matching:(id)a1 learningSession:(id)a2 error:(id *)a3;
- (char)deleteDevice:(id)a0 error:(id *)a1;
- (char)setPairState:(char)a0 forAppleRemote:(id)a1 error:(id *)a2;

@end
