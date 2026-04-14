@interface CoreCECBusClient : CoreCECBus

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)setOSDName:(id)a0 error:(id *)a1;
- (id)addDeviceWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)setTvLanguageCode:(id)a0 error:(id *)a1;

@end
