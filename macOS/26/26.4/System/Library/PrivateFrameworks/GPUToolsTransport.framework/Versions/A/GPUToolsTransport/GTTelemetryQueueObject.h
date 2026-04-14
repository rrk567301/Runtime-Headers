@class GTTelemetryRecordObject;

@interface GTTelemetryQueueObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned long long commits;
@property (retain, nonatomic) GTTelemetryRecordObject *gpuTime;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
