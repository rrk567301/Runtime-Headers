@class NSString, ASDTIPCAudioDeviceClient;

@interface ASDTIPCAudioCustomProperty : ASDTCustomProperty <ASDTIPCAudioObject>

@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) unsigned int devicePropertyID;
@property (weak, nonatomic) ASDTIPCAudioDeviceClient *deviceClient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)propertyName;
- (id)getDeviceClient;
- (BOOL)checkPropertyValue:(id)a0;
- (id)getPropertyWithSize:(unsigned long long)a0;
- (id)initWithConfig:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;
- (id)retrievePropertyValue;
- (BOOL)setPropertyWithData:(id)a0;
- (BOOL)storePropertyValue:(id)a0;

@end
