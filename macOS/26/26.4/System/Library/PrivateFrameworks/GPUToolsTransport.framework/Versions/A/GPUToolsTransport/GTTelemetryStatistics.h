@class NSArray;

@interface GTTelemetryStatistics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSArray *queues;
@property (copy, nonatomic) NSArray *layers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
