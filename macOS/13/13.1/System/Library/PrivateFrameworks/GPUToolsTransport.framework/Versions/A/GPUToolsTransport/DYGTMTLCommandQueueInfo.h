@class NSString, CaptureMTLCommandQueue;

@interface DYGTMTLCommandQueueInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long toolsDeviceAddress;
@property (nonatomic) unsigned long long queueAddress;
@property (nonatomic) unsigned long long toolsQueueAddress;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL canBeCaptured;
@property (nonatomic) BOOL isOpenGLQueue;
@property (nonatomic) BOOL isInternalQueue;
@property (nonatomic) CaptureMTLCommandQueue *captureCommandQueue;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
