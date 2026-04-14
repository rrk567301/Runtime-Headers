@class NSNumber;

@interface GCDeviceAdaptiveTriggersStatusPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSNumber *armPosition;
@property (readonly, nonatomic) NSNumber *mode;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)initFeedbackWithStatus:(unsigned char)a0 armPosition:(unsigned char)a1 mode:(unsigned char)a2;

@end
