@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamOutput : VCObject <VCRemoteVideoManagerStreamOutputDelegate> {
    struct opaqueVCRemoteImageQueue { } *_remoteQueue;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    int _clientProcessID;
    struct __CFDictionary { } *_attributes;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    char _useFigRemoteQueue;
}

@property (readonly, nonatomic) long long streamToken;
@property (readonly) char isClientInProcess;
@property (readonly) struct __CFAllocator { } *backingBufferAllocator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)didInvalidate;
- (int)processID;
- (void)didSuspend:(char)a0;
- (id)copyXpcSenderQueue;
- (char)createRemoteQueue;
- (void)didDegrade:(char)a0;
- (void)didPause:(char)a0;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didStall:(char)a0;
- (void)didUpdateAttachments:(struct __CFDictionary { } *)a0;
- (id)initWithStreamToken:(long long)a0 clientProcessID:(int)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (char)initXPCCommandQueue;

@end
