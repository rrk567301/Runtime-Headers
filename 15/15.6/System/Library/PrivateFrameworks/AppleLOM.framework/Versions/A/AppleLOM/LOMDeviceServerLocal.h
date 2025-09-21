@class LOMDeviceClientRemote;

@interface LOMDeviceServerLocal : LOMDeviceServer {
    LOMDeviceClientRemote *_device;
    char _isLOMSupported;
}

- (id)description;
- (void).cxx_destruct;
- (char)start;
- (id)initWithServiceName:(id)a0;
- (id)serialize;
- (char)isSupported;
- (char)remove:(id)a0 error:(out id *)a1;
- (char)getInfo:(id *)a0 error:(out id *)a1;
- (char)install:(id)a0 error:(out id *)a1;

@end
