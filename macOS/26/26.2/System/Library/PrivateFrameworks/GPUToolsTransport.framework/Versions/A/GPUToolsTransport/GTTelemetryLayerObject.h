@class GTTelemetryRecordObject;

@interface GTTelemetryLayerObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned long long frames;
@property (retain, nonatomic) GTTelemetryRecordObject *fps;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
