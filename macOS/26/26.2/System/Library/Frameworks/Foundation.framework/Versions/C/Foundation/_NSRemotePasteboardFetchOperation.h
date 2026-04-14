@class NSData, NSError, NSObject;
@protocol OS_dispatch_group, UAPasteboardItemProviding;

@interface _NSRemotePasteboardFetchOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    _Atomic char _state;
}

@property (readonly) NSObject<UAPasteboardItemProviding> *provider;
@property (retain) NSData *data;
@property (retain) NSError *error;
@property (readonly) NSObject<OS_dispatch_group> *completionGroup;

- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithProvider:(id)a0;
- (void)start;
- (id)description;
- (void)dealloc;
- (void)discardData;

@end
