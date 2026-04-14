@class NSMutableDictionary, NSMutableArray;

@interface HIDRemoteEndpoint : NSObject {
    NSMutableDictionary *_devices;
    NSMutableArray *_prevDeviceLog;
}

@property unsigned long long endpointID;
@property unsigned char primarySide;

- (void)addDevice:(id)a0;
- (id)initWithID:(unsigned long long)a0;
- (id)devices;
- (void)removeDevice:(id)a0;
- (void).cxx_destruct;
- (void)removeAllDevices;
- (void)removeDeviceID:(unsigned long long)a0;
- (id)copyState;
- (id)getDevice:(unsigned long long)a0;

@end
