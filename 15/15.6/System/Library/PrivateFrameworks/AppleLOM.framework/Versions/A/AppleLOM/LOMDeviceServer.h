@class LOMDeviceConnection, NSArray, LOMControllerConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LOMDeviceServer : NSObject <LOMDevice> {
    char _isLOMSupported;
}

@property (retain) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain) id identity;
@property (retain) id identityCert;
@property (retain) NSArray *caCerts;
@property (retain) id privateKey;
@property (retain) LOMDeviceConnection *deviceConnection;
@property (retain) LOMControllerConnection *controllerConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)start;
- (id)initWithServiceName:(id)a0;
- (void)stop;
- (id)serialize;
- (char)isSupported;
- (id)copyPropertyForKey:(id)a0;
- (char)remove:(id)a0 error:(out id *)a1;
- (id)loadCertsAndKey;
- (void)completeDeviceRequest:(id)a0;
- (char)getInfo:(id *)a0 error:(out id *)a1;
- (id)handleDeviceRequest:(id)a0 error:(id *)a1;
- (char)install:(id)a0 error:(out id *)a1;
- (void)refereshCertsAndKeys;

@end
