@class NSArray, NSMutableSet, CMCaptureLocalSessionVideoConfiguration;
@protocol CMCaptureLocalSessionOutputStreamSampleBufferReceiver;

@interface CMCaptureLocalSessionOutputStream : NSObject

@property (retain, nonatomic) NSMutableSet *requestedMetadataObjects;
@property (readonly, nonatomic) id<CMCaptureLocalSessionOutputStreamSampleBufferReceiver> sampleBufferReceiver;
@property (readonly, nonatomic) CMCaptureLocalSessionVideoConfiguration *videoConfiguration;
@property (readonly, nonatomic) NSArray *associatedSinkIDs;

+ (void)initialize;

- (void)dealloc;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (id)initWithSampleBufferReceiver:(id)a0;

@end
