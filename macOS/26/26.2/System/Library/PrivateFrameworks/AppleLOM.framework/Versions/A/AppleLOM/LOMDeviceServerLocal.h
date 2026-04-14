@class LOMDeviceClientRemote;

@interface LOMDeviceServerLocal : LOMDeviceServer {
    LOMDeviceClientRemote *_device;
    BOOL _isLOMSupported;
}

- (BOOL)isSupported;
- (id)serialize;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (BOOL)start;
- (id)description;
- (BOOL)remove:(id)a0 error:(out id *)a1;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;
- (BOOL)install:(id)a0 error:(out id *)a1;

@end
