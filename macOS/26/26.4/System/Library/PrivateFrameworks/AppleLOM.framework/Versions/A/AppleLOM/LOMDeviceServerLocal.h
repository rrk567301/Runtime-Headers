@class LOMDeviceClientRemote;

@interface LOMDeviceServerLocal : LOMDeviceServer {
    LOMDeviceClientRemote *_device;
    BOOL _isLOMSupported;
}

- (id)initWithServiceName:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)start;
- (id)description;
- (BOOL)isSupported;
- (BOOL)remove:(id)a0 error:(out id *)a1;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;
- (BOOL)install:(id)a0 error:(out id *)a1;

@end
