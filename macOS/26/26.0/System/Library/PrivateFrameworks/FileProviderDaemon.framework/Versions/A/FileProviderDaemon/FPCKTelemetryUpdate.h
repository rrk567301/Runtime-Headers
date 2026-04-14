@class NSString;

@interface FPCKTelemetryUpdate : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) double status;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithStatus:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;

@end
