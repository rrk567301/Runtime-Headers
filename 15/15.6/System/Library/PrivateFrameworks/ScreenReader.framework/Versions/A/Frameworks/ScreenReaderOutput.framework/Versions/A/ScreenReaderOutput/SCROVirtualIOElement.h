@class NSString;

@interface SCROVirtualIOElement : NSObject <SCROIOElementProtocol, SCROIOBluetoothElementProtocol> {
    int _token;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemElement;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (int)identifier;
- (int)transport;
- (id)bluetoothAddress;
- (id)_initWithToken:(int)a0;
- (unsigned int)ioObject;

@end
