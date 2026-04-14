@class MRApplicationConnectionRequestInfo, NSString, MRApplicationConnectionContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRApplicationConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL isIncomingConnection;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSMutableArray *pendingReceivedMessages;
@property (readonly, nonatomic) MRApplicationConnectionContext *context;
@property (readonly, nonatomic) MRApplicationConnectionRequestInfo *requestInfo;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *serviceName;
@property (copy, nonatomic) id /* block */ incomingMessageHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)invalidate:(id)a0;
- (void)dealloc;
- (void)sendMessage:(id)a0;
- (id)description;
- (void)activate;
- (unsigned long long)hash;
- (void)handleMessage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 playerPath:(id)a1;
- (id)destinationPlayerPath;
- (void)handleMediaRemoteServiceInvalidatedNotification:(id)a0;
- (id)initWithContext:(id)a0 requestInfo:(id)a1;

@end
