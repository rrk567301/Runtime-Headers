@class NSString, PKPayloadCopier, NSObject;
@protocol OS_dispatch_queue;

@interface _PKSignedContainerCopyCancelHandler : NSObject <PKSignedContainerUnarchivalOperationToken> {
    PKPayloadCopier *_copier;
    BOOL _isCancelled;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCancelled;
- (void)dealloc;
- (void)cancel;
- (id)init;
- (void)setCopier:(id)a0;

@end
