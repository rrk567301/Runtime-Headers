@class NSNumber, NSDictionary, NSString;

@interface IDSServiceMetricContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSDictionary *timestampDictionary;
@property (retain, nonatomic) NSString *identifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTimestamp:(id)a0 identifier:(id)a1;
- (id)initWithTimestampDictionary:(id)a0 identifier:(id)a1;

@end
