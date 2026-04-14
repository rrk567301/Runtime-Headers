@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HIDRemoteDeviceServer : NSObject {
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSMutableDictionary *_refreshCounts;
}

@property (readonly) NSMutableDictionary *endpoints;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (BOOL)createRemoteDevice:(id)a0 deviceID:(unsigned long long)a1 property:(id)a2;
- (id)initWithQueue:(id)a0;
- (void)cancel;
- (void)remoteDeviceRefresh:(id)a0 deviceID:(unsigned long long)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (int)remoteDeviceSetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (id)description;
- (int)remoteDeviceGetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (void)activate;
- (void).cxx_destruct;
- (void)disconnectAll;
- (void)remoteDeviceConfirmConnectHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1[0]; } *)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (BOOL)connectEndpoint:(id)a0;
- (void)disconnectEndpoint:(id)a0;
- (void)endpointMessageHandler:(id)a0 data:(char *)a1 size:(unsigned long long)a2;
- (void)endpointPacketHandler:(id)a0 packet:(struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } *)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (unsigned long long)getRefreshCountForEndpoint:(id)a0 deviceID:(unsigned long long)a1;
- (void)remoteDeviceConnectHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1[0]; } *)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (BOOL)remoteDeviceGetReportHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1; unsigned char x2[0]; } *)a1;
- (BOOL)remoteDeviceReportHandler:(id)a0 header:(struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } *)a1;
- (BOOL)remoteDeviceReportHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1; unsigned char x2[0]; } *)a1;
- (BOOL)remoteDeviceSetReportHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1; unsigned char x2[0]; } *)a1;
- (void)setRefreshCountForEndpoint:(id)a0 deviceID:(unsigned long long)a1 count:(unsigned long long)a2;

@end
