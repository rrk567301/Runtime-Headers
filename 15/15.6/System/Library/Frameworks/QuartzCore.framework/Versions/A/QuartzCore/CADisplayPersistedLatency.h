@class NSString, NSDictionary;

@interface CADisplayPersistedLatency : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *mode;
@property (nonatomic) double latency;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
