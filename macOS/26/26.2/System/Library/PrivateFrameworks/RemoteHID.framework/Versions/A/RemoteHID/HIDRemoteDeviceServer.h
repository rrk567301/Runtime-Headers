@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HIDRemoteDeviceServer : NSObject {
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSMutableDictionary *_refreshCounts;
    NSMutableDictionary *_endpoints;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (id)initWithQueue:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)description;
- (void)activate;
- (BOOL)createRemoteDevice:(id)a0 deviceID:(unsigned long long)a1 property:(id)a2;
- (void)remoteDeviceRefresh:(id)a0 deviceID:(unsigned long long)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (int)remoteDeviceSetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (int)remoteDeviceGetReport:(id)a0 type:(long long)a1 reportID:(unsigned char)a2 report:(id)a3;
- (id)endpoints;
- (id)getEndpoint:(unsigned long long)a0;
- (void)disconnectAll;
- (void)remoteDeviceConfirmConnectHandler:(id)a0 packet:(struct { struct { unsigned char x0 : 7; unsigned short x1 : 10; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned short x6 : 9; } x0; unsigned char x1[0]; } *)a1 transportVersion:(unsigned char)a2 side:(unsigned char)a3;
- (id)_disconnectEndpointID:(unsigned long long)a0;
- (void)connectEndpoint:(id)a0;
- (void)disconnectEndpointID:(unsigned long long)a0;
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
