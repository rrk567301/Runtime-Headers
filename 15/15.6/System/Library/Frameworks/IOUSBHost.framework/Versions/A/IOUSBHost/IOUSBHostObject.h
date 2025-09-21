@class IOUSBHostInterestNotifier, NSMutableDictionary, NSMutableSet, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface IOUSBHostObject : NSObject {
    _Atomic BOOL destroyed;
}

@property unsigned long long debugLoggingMask;
@property unsigned int ioService;
@property unsigned int ioConnection;
@property struct IONotificationPort { } *ioNotificationPortRef;
@property (retain, nonatomic) IOUSBHostInterestNotifier *interestNotifier;
@property (copy) id /* block */ interestHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableSet *invalidDescriptorCache;
@property (retain) NSMutableDictionary *descriptorCache;
@property const struct IOUSBDeviceDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; } *deviceDescriptor;
@property (retain) NSArray *supportedStringLanguages;
@property (readonly) const struct IOUSBBOSDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; } *capabilityDescriptors;
@property (readonly) unsigned long long deviceAddress;

- (void)dealloc;
- (void).cxx_destruct;
- (void)destroy;
- (char)abortDeviceRequestsWithError:(id *)a0;
- (char)abortDeviceRequestsWithOption:(unsigned long long)a0 error:(id *)a1;
- (void)closeWithOptions:(unsigned int)a0;
- (const struct IOUSBConfigurationDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)configurationDescriptorWithConfigurationValue:(unsigned long long)a0 error:(id *)a1;
- (const struct IOUSBConfigurationDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *)configurationDescriptorWithIndex:(unsigned long long)a0 error:(id *)a1;
- (const struct IOUSBDescriptorHeader { unsigned char x0; unsigned char x1; } *)descriptorWithType:(int)a0 length:(unsigned long long *)a1 error:(id *)a2;
- (const struct IOUSBDescriptorHeader { unsigned char x0; unsigned char x1; } *)descriptorWithType:(int)a0 length:(unsigned long long *)a1 index:(unsigned long long)a2 languageID:(unsigned long long)a3 error:(id *)a4;
- (const struct IOUSBDescriptorHeader { unsigned char x0; unsigned char x1; } *)descriptorWithType:(int)a0 length:(unsigned long long *)a1 index:(unsigned long long)a2 languageID:(unsigned long long)a3 requestType:(int)a4 requestRecipient:(int)a5 error:(id *)a6;
- (void)destroyWithOptions:(unsigned long long)a0;
- (char)enqueueDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 completionTimeout:(double)a2 error:(id *)a3 completionHandler:(id /* block */)a4;
- (char)enqueueDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 error:(id *)a2 completionHandler:(id /* block */)a3;
- (char)enqueueDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 error:(id *)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)frameNumberWithTime:(unsigned long long *)a0;
- (id)initWithIOService:(unsigned int)a0 options:(unsigned long long)a1 queue:(id)a2 error:(id *)a3 interestHandler:(id /* block */)a4;
- (id)initWithIOService:(unsigned int)a0 queue:(id)a1 error:(id *)a2 interestHandler:(id /* block */)a3;
- (id)ioDataWithCapacity:(unsigned long long)a0 error:(id *)a1;
- (char)openWithOptions:(unsigned long long)a0 error:(id *)a1;
- (char)sendDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 bytesTransferred:(unsigned long long *)a2 completionTimeout:(double)a3 error:(id *)a4;
- (char)sendDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 data:(id)a1 bytesTransferred:(unsigned long long *)a2 error:(id *)a3;
- (char)sendDeviceRequest:(struct IOUSBDeviceRequest { unsigned char x0; unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; })a0 error:(id *)a1;
- (id)stringWithIndex:(unsigned long long)a0 error:(id *)a1;
- (id)stringWithIndex:(unsigned long long)a0 languageID:(unsigned long long)a1 error:(id *)a2;

@end
