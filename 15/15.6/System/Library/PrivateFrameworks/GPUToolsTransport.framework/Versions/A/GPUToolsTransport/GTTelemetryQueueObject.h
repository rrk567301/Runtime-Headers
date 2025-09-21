@class GTTelemetryRecordObject;

@interface GTTelemetryQueueObject : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned long long commits;
@property (retain, nonatomic) GTTelemetryRecordObject *gpuTime;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
