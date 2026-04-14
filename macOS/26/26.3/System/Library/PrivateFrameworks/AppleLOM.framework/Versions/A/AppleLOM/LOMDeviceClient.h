@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LOMDeviceClient : NSObject <LOMDeviceMDMRequestDelegate>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (BOOL)remove:(id)a0 error:(out id *)a1;
- (BOOL)getInfo:(id *)a0 error:(out id *)a1;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (id)sendCommand:(id)a0 error:(id *)a1;

@end
