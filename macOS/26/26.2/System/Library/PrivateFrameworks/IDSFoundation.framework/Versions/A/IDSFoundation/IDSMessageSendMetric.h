@class NSString, NSMutableDictionary;

@interface IDSMessageSendMetric : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *metrics;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) long long type;
@property (retain) NSString *samplingID;

- (id)initWithCoder:(id)a0;
- (id)metricsDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addEntry:(id)a0 forKey:(id)a1;
- (id)initWithType:(long long)a0 guid:(id)a1 service:(id)a2 clientMetrics:(id)a3;
- (id)initWithType:(long long)a0 guid:(id)a1 service:(id)a2;

@end
