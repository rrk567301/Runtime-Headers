@class NSString, NSUUID, NSMutableArray;
@protocol _HMMLogBackendSubmitterDelegate;

@interface HMMQueuingRTCBackendSession : NSObject <HMMRTCBackendSession> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _isOpen;
    NSMutableArray *_queuedEvents;
}

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) char isRealtime;
@property (readonly, weak, nonatomic) id<_HMMLogBackendSubmitterDelegate> submitter;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) double lastEventTime;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (char)sendMessage:(id)a0;
- (id)initWithServiceName:(id)a0 sessionUUID:(id)a1 isRealtime:(char)a2 submitter:(id)a3 timeSourceBlock:(id /* block */)a4;

@end
