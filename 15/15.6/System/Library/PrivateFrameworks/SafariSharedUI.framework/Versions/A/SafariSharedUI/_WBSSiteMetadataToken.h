@class WBSSiteMetadataRequest, NSSet, NSMutableSet, NSObject, WBSDispatchSourceTimer;
@protocol OS_dispatch_queue;

@interface _WBSSiteMetadataToken : NSObject {
    char _cancelled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cancelledLock;
    NSMutableSet *_parentRequests;
}

@property (getter=isCancelled) char cancelled;
@property (readonly, nonatomic) char isOneTimeRequest;
@property (readonly, nonatomic) WBSSiteMetadataRequest *request;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSSet *parentRequests;
@property (nonatomic) long long priority;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;
@property (retain, nonatomic) WBSDispatchSourceTimer *delayTimer;
@property (nonatomic) char didReceiveResponse;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)dispatchResponse:(id)a0;
- (id)initWithRequest:(id)a0 isOneTimeRequest:(char)a1 queue:(id)a2 responseHandler:(id /* block */)a3;
- (void)removeParentRequest:(id)a0;

@end
