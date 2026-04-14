@class GTCapturableObject;

@interface GTCaptureDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long captureMode;
@property (nonatomic) unsigned long long triggerHitsToStart;
@property (nonatomic) unsigned long long triggerHitsToEnd;
@property (nonatomic) BOOL suspendAfterCapture;
@property (nonatomic) BOOL ignoreUnusedResources;
@property (retain, nonatomic) GTCapturableObject *objectToCapture;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
