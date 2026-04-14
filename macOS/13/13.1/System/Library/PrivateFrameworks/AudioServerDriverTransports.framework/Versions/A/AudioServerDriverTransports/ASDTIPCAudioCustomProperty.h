@class NSString, NSMutableData, ASDTIPCAudioDeviceClient;

@interface ASDTIPCAudioCustomProperty : ASDTCustomProperty <ASDTIPCAudioObject>

@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL cached;
@property (nonatomic) unsigned int cacheMaxSize;
@property (retain, nonatomic) NSMutableData *cachedData;
@property (nonatomic) unsigned int devicePropertyID;
@property (weak, nonatomic) ASDTIPCAudioDeviceClient *deviceClient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)propertyName;
- (id)initWithConfig:(id)a0 propertyDataType:(unsigned int)a1 qualifierDataType:(unsigned int)a2;
- (BOOL)setPropertyWithData:(id)a0;
- (id)getPropertyWithSize:(unsigned long long)a0;
- (id)getDeviceClient;
- (id)updateCachedData:(id)a0;

@end
