@class LOMDeviceClientRemote;

@interface LOMDeviceServerLocal : LOMDeviceServer {
    LOMDeviceClientRemote *_device;
    BOOL _isLOMSupported;
}

- (BOOL)start;
- (id)description;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (id)initWithServiceName:(id)a0;
- (BOOL)remove:(id)a0 error:(out id *)a1;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;
- (BOOL)install:(id)a0 error:(out id *)a1;

@end
