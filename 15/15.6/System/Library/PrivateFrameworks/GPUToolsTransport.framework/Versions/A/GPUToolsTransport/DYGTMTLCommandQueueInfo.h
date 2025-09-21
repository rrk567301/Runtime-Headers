@class NSString;

@interface DYGTMTLCommandQueueInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long deviceStreamRef;
@property (nonatomic) unsigned long long toolsDeviceAddress;
@property (nonatomic) unsigned long long queueAddress;
@property (nonatomic) unsigned long long toolsQueueAddress;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) char canBeCaptured;
@property (nonatomic) char isOpenGLQueue;
@property (nonatomic) char isInternalQueue;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
