@class NSUUID, NSString, NSMutableArray, RTCReporting;
@protocol _HMFLogBackendSessionDelegate;

@interface _HMFLogBackendSession : NSObject <HMFLogBackendSession, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_queuedEvents;
    RTCReporting *_session;
}

@property (readonly, nonatomic) NSUUID *samplingUUID;
@property (readonly, nonatomic) BOOL isRealtime;
@property (weak, nonatomic) id<_HMFLogBackendSessionDelegate> delegate;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0;
- (BOOL)_sendMessagePayload:(id)a0;
- (void)_flushQueuedEvents;
- (id)initWithSession:(id)a0 serviceName:(id)a1 samplingUUID:(id)a2 isRealtime:(BOOL)a3 delegate:(id)a4;
- (void)activateWithSession:(id)a0;

@end
