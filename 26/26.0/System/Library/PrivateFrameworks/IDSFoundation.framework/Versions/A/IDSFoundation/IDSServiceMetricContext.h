@class NSNumber, NSDictionary, NSString;

@interface IDSServiceMetricContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSDictionary *timestampDictionary;
@property (retain, nonatomic) NSString *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 identifier:(id)a1;
- (id)initWithTimestampDictionary:(id)a0 identifier:(id)a1;

@end
