@interface PIPerfPowerServiceIdentifier : NSObject

@property (readonly, nonatomic) struct PPSTelemetryIdentifier { } *telemetryId;

+ (id)genEditIdentifier;

- (id)initWithIdentifier:(struct PPSTelemetryIdentifier { } *)a0;
- (id)init;

@end
