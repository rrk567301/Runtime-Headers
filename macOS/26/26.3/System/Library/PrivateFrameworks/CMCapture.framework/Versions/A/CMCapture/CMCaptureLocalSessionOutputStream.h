@class NSMutableDictionary, NSArray, CMCaptureLocalSessionVideoConfiguration, NSMutableSet;
@protocol CMCaptureLocalSessionOutputStreamSampleBufferReceiver;

@interface CMCaptureLocalSessionOutputStream : NSObject

@property (retain, nonatomic) NSMutableSet *requestedMetadataObjects;
@property (retain, nonatomic) NSMutableDictionary *faceTrackingAttributes;
@property (readonly, nonatomic) id<CMCaptureLocalSessionOutputStreamSampleBufferReceiver> sampleBufferReceiver;
@property (readonly, nonatomic) CMCaptureLocalSessionVideoConfiguration *videoConfiguration;
@property (readonly, nonatomic) NSArray *associatedSinkIDs;

+ (void)initialize;

- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)dealloc;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (struct opaqueCMSampleBuffer { } *)_copyMetadataOnlySampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithSampleBufferReceiver:(id)a0;

@end
