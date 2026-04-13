@class NSString, AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCStreamOutput : NSObject <VCRemoteVideoManagerStreamOutputDelegate> {
    AVConferenceXPCClient *_connection;
    struct __CFDictionary { } *_attachments;
    BOOL _isMediaStalled;
    int _processID;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastHealthPrintTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastSampleBufferTime;
    unsigned int _sampleBufferCount;
    float _estimatedDataRate;
}

@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) BOOL isDegraded;
@property (nonatomic) BOOL isSuspended;
@property (nonatomic) BOOL isValid;
@property (nonatomic) id delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalReceiverQueue;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) float synchronizationTimeOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)didInvalidate;
- (int)processID;
- (void)terminateConnection;
- (void)didSuspend:(BOOL)a0;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotification;
- (void)didPause:(BOOL)a0;
- (void)didStall:(BOOL)a0;
- (void)didDegrade:(BOOL)a0;
- (void)serviceHandlerDidDieWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidPauseWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidStallWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidDegradeWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidSuspendWithArguments:(id)a0 error:(id)a1;
- (void)serviceHandlerDidReleaseOutputQueueWithArguments:(id)a0 error:(id)a1;
- (void)didUpdateAttachments:(struct __CFDictionary { } *)a0;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithStreamToken:(long long)a0 delegate:(id)a1 queue:(id)a2 error:(id *)a3;

@end
