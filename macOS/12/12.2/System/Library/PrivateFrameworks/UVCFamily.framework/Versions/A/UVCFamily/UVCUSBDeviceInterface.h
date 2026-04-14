@class NSArray, NSDictionary, NSData, IOUSBHostInterface;
@protocol UVCUSBDeviceInterfaceDataDelegate;

@interface UVCUSBDeviceInterface : NSObject {
    unsigned long long _registryID;
    NSArray *_associatedCSDescriptors;
    id<UVCUSBDeviceInterfaceDataDelegate> _dataDelegate;
    NSDictionary *_attributes;
    NSData *_configurationDescriptor;
    unsigned short _bcdUSB;
    unsigned long long _interfaceNumber;
    long long _deviceSpeed;
    unsigned long long _protocolNumber;
    long long _interfaceIdlePolicy;
    unsigned long long _pipeIdlePolicy;
}

@property (readonly) IOUSBHostInterface *interface;

+ (unsigned int)copyDeviceForInterface:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)registryID;
- (id)attributes;
- (id)dataDelegate;
- (unsigned long long)interfaceNumber;
- (id)initWithInterface:(id)a0 delegate:(id)a1 attributes:(id)a2;
- (id)associatedCSDescriptors;
- (unsigned short)bcdUSB;
- (BOOL)interfaceRequest:(id)a0 bRequestType:(unsigned long long)a1 direction:(int)a2 selector:(unsigned long long)a3 entityID:(unsigned long long)a4 error:(id *)a5;
- (id)getEndpointDescriptorsForAlternateSetting:(unsigned long long)a0;
- (id)createDataBuffers:(unsigned long long)a0 count:(long long)a1;
- (long long)pipeIdlePolicy;
- (void)setBcdUSB:(unsigned short)a0;
- (BOOL)parseConfigurationDescriptor;
- (BOOL)parseCSDescriptorsForInterface;
- (void)setIdlePolicy;
- (const struct IOUSBInterfaceDescriptor { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; } *)interfaceDescriptorForAlterateSetting:(unsigned long long)a0;
- (long long)interfaceIdlePolicy;
- (unsigned long long)protocolNumber;

@end
