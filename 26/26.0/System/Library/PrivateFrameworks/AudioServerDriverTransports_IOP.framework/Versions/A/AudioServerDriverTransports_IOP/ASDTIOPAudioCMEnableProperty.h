@class NSString, ASDTIOPAudioCMDevice;

@interface ASDTIOPAudioCMEnableProperty : ASDTCustomProperty <ASDTConcreteCustomProperty, ASDTIOServiceDependency>

@property (retain, nonatomic) ASDTIOPAudioCMDevice *clientManager;
@property (nonatomic) unsigned int enableDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ioServiceDependenciesForConfig:(id)a0;

- (void)dealloc;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (int)checkPropertyValue:(id)a0;
- (id)retrievePropertyValue;
- (BOOL)storePropertyValue:(id)a0;

@end
