@interface CoreCECBusClient : CoreCECBus

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addDeviceWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)injectRXMessage:(id)a0 error:(id *)a1;
- (BOOL)injectTXMessage:(id)a0 error:(id *)a1;
- (void)removeDeviceWithType:(unsigned long long)a0;
- (BOOL)setOSDName:(id)a0 error:(id *)a1;
- (BOOL)setTvLanguageCode:(id)a0 error:(id *)a1;

@end
